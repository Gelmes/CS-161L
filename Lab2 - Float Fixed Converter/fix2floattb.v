`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:34:39 01/29/2017
// Design Name:   fix2float
// Module Name:   C:/Users/Marco/Dropbox/School/WINTER 2017/161L/converter/fix2floattb.v
// Project Name:  converter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fix2float
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fix2floattb;

	// Inputs
	reg [31:0] fixn;
	reg [4:0] fixposition;

	// Outputs
	wire [31:0] floatn;

	// Instantiate the Unit Under Test (UUT)
	fix2float uut (
		.fixn(fixn), 
		.fixposition(fixposition), 
		.floatn(floatn)
	);

	initial begin
		// Initialize Inputs 
		//---------smmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm;
		fixn = 32'b00000000000000000000000000011111;
		fixposition = 2;

		// Wait 100 ns for global reset to finish
		#100;
		
		$display  ("Result: %d", fixn);

	end
      
endmodule

