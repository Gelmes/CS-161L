`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:22:43 01/09/2017
// Design Name:   fulladder
// Module Name:   C:/Users/Marco/Dropbox/School/Wynter 2017/161L/Tutorial/TB_Tutorial.v
// Project Name:  Tutorial
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fulladder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_Tutorial;

	// Inputs
	reg A;
	reg B;
	reg Cin;

	// Outputs
	wire Sum;
	wire Cout;

	// Instantiate the Unit Under Test (UUT)
	fulladder uut (
		.A(A), 
		.B(B), 
		.Cin(Cin), 
		.Sum(Sum), 
		.Cout(Cout)
	);

	initial begin
		A = 0; B = 0; Cin = 1'b0; #100 ;
		A = 0; B = 1; Cin = 1'b0; #100 ;
		A = 1; B = 0; Cin = 1'b0; #100 ;
		A = 1; B = 1; Cin = 1'b0; #100 ;
		A = 0; B = 0; Cin = 1'b0; #100 ;
		A = 0; B = 1; Cin = 1'b0; #100 ;
		A = 1; B = 0; Cin = 1'b0; #100 ;
		A = 1; B = 1; Cin = 1'b0; #100 ;

	end
      
endmodule

