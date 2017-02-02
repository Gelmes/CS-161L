`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:34:54 01/26/2017
// Design Name:   float2fix
// Module Name:   C:/Users/Marco/Dropbox/School/WINTER 2017/161L/converter/float2fixtb.v
// Project Name:  converter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: float2fix
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module float2fixtb;

	// Inputs
	reg [31:0] floatn;
	reg [4:0] fixposition;

	// Outputs
	wire signed[31:0] fixn;

	// Instantiate the Unit Under Test (UUT)
	float2fix uut (
		.floatn(floatn), 
		.fixposition(fixposition), 
		.fixn(fixn)
	);

	initial begin
		// Initialize Inputs 
		//-----------seeeeeeeemmmmmmmmmmmmmmmmmmmmmmm;
		floatn = 32'b11000000111000000000000000000000;
		fixposition = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		$display  ("Result: %d", fixn);
        
		// Add stimulus here

	end
      
endmodule

