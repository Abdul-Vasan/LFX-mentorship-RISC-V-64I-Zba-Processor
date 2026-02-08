module dmem #(
    parameter MEM_SIZE = 4096
)(
    input  logic        clk,
    input  logic [63:0] addr,
    input  logic [63:0] wdata,
    input  logic [7:0]  byte_en,
    input  logic        wen,
    output logic [63:0] rdata
);

    logic [7:0] mem [0:MEM_SIZE-1];

    initial begin
        for (int i = 0; i < MEM_SIZE; i++) begin
            mem[i] = 8'd0;
        end
    end

    // Read (combinational)
    assign rdata = {mem[addr[31:0]+7], mem[addr[31:0]+6], mem[addr[31:0]+5], mem[addr[31:0]+4],
                    mem[addr[31:0]+3], mem[addr[31:0]+2], mem[addr[31:0]+1], mem[addr[31:0]+0]};

    // Write (synchronous)
    always_ff @(posedge clk) begin
        if (wen) begin
            if (byte_en[0]) mem[addr[31:0]+0] <= wdata[7:0];
            if (byte_en[1]) mem[addr[31:0]+1] <= wdata[15:8];
            if (byte_en[2]) mem[addr[31:0]+2] <= wdata[23:16];
            if (byte_en[3]) mem[addr[31:0]+3] <= wdata[31:24];
            if (byte_en[4]) mem[addr[31:0]+4] <= wdata[39:32];
            if (byte_en[5]) mem[addr[31:0]+5] <= wdata[47:40];
            if (byte_en[6]) mem[addr[31:0]+6] <= wdata[55:48];
            if (byte_en[7]) mem[addr[31:0]+7] <= wdata[63:56];
        end
    end

endmodule
