`timescale 1ns / 1ps

module fix2float(
    input  wire [31:0] fixn,
    input  wire [4:0] fixposition,
	 input  wire clk,
    output reg [31:0] floatn
    );

reg [31:0] tn;
reg [5:0] msbpos;
reg [7:0] exp;

//combinational
always @(*) begin
	if (fixn[31] == 1) begin
		tn = (fixn ^ 'hffffffff) + 1;
	end else begin
		tn = fixn;	
	end
	
	msbpos = 31;

	while (tn[msbpos] != 1) begin
		msbpos = msbpos - 1;
	end
	
	tn = tn << 23 - msbpos;
	exp = 127 + msbpos - fixposition;
	tn[31] = fixn[31]; //sign
	tn[30-:8] = exp;   //exponent
	floatn = tn;
end

endmodule
