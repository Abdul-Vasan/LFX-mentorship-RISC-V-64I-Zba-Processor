module imem #(
    parameter MEM_SIZE = 4096,
    parameter INIT_FILE = ""
)(
    input  logic [63:0] addr,
    output logic [31:0] rdata
);

    logic [31:0] mem [0:MEM_SIZE-1];

    initial begin
        for (int i = 0; i < MEM_SIZE; i++) begin
            mem[i] = 32'h00000013;  // NOP (ADDI x0, x0, 0)
        end
        if (INIT_FILE != "") begin
            $readmemh(INIT_FILE, mem);
        end
    end

    assign rdata = mem[addr[31:2]];

endmodule
