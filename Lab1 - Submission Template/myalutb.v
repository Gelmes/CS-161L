`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////

module myalutb;

	// Inputs
	reg clk;
	reg rst;
	reg [31:0] A;
	reg [31:0] B;
	reg [2:0] opcode;

	// Outputs
	wire [31:0] result;
	wire zero;

	// Unit Under Test (UUT)
	my_alu uut (
		.clk(clk), .reset(rst), .A(A), .B(B),  
		.opcode(opcode), .result(result),  .zero(zero)
	);
  
  	initial begin 
	
	 clk = 0 ; rst = 1 ; #10 ; 
	 clk = 1 ; rst = 1 ; #10 ; 
	 clk = 0 ; rst = 1 ; #10 ; 
	 clk = 1 ; rst = 0 ; #10 ; 
	  
	 forever begin 
		clk = ~clk; #10 ; 
	 end 
	 
	end 
	
	initial begin

	   A = 'd0; B = 'd0; opcode = 0;

		#40 ; // Reset  
		A = 'd1; B = 'd1;  opcode = 0; #20;
  		A = 'd1; B = 'd0;  opcode = 0; #20;
		A = 'd2; B = 'd2;  opcode = 0; #20;
		A = 'd3; B = 'd3;  opcode = 0; #20;
			
		A = 'd8; B = 'd0;  opcode = 1; #20;
  		A = 'd7; B = 'd1;  opcode = 1; #20;
		A = 'd6; B = 'd2;  opcode = 1; #20;
		A = 'd5; B = 'd3;  opcode = 1; #20;

      // More test cases 

	end
      
endmodule

