module mem_stage
    import riscv_pkg::*;
(
    // From EX/MEM register
    input  ex_mem_reg_t ex_mem_reg,
    // Data memory interface
    output logic [63:0] dmem_addr,
    output logic [63:0] dmem_wdata,
    output logic [7:0]  dmem_byte_en,
    output logic        dmem_wen,
    input  logic [63:0] dmem_rdata,
    // Output
    output logic [63:0] mem_rdata
);

    logic [2:0] byte_offset;
    logic [63:0] aligned_wdata;
    logic [63:0] aligned_rdata;

    assign byte_offset = ex_mem_reg.alu_result[2:0];
    assign dmem_addr = {ex_mem_reg.alu_result[63:3], 3'b000};
    assign dmem_wen = ex_mem_reg.mem_write && ex_mem_reg.valid;

    // Store data alignment and byte enables
    always_comb begin
        dmem_wdata = 64'd0;
        dmem_byte_en = 8'd0;

        if (ex_mem_reg.mem_write) begin
            case (ex_mem_reg.mem_size)
                MEM_BYTE: begin
                    dmem_wdata = ex_mem_reg.rs2_data[7:0] << (byte_offset * 8);
                    dmem_byte_en = 8'b00000001 << byte_offset;
                end
                MEM_HALF: begin
                    dmem_wdata = ex_mem_reg.rs2_data[15:0] << (byte_offset * 8);
                    dmem_byte_en = 8'b00000011 << byte_offset;
                end
                MEM_WORD: begin
                    dmem_wdata = ex_mem_reg.rs2_data[31:0] << (byte_offset * 8);
                    dmem_byte_en = 8'b00001111 << byte_offset;
                end
                MEM_DOUBLE: begin
                    dmem_wdata = ex_mem_reg.rs2_data;
                    dmem_byte_en = 8'b11111111;
                end
                default: begin
                    dmem_wdata = 64'd0;
                    dmem_byte_en = 8'd0;
                end
            endcase
        end
    end

    // Load data alignment and sign extension
    always_comb begin
        aligned_rdata = dmem_rdata >> (byte_offset * 8);

        case (ex_mem_reg.mem_size)
            MEM_BYTE: begin
                if (ex_mem_reg.mem_unsigned)
                    mem_rdata = {56'd0, aligned_rdata[7:0]};
                else
                    mem_rdata = {{56{aligned_rdata[7]}}, aligned_rdata[7:0]};
            end
            MEM_HALF: begin
                if (ex_mem_reg.mem_unsigned)
                    mem_rdata = {48'd0, aligned_rdata[15:0]};
                else
                    mem_rdata = {{48{aligned_rdata[15]}}, aligned_rdata[15:0]};
            end
            MEM_WORD: begin
                if (ex_mem_reg.mem_unsigned)
                    mem_rdata = {32'd0, aligned_rdata[31:0]};
                else
                    mem_rdata = {{32{aligned_rdata[31]}}, aligned_rdata[31:0]};
            end
            MEM_DOUBLE: begin
                mem_rdata = aligned_rdata;
            end
            default: begin
                mem_rdata = 64'd0;
            end
        endcase
    end

endmodule
