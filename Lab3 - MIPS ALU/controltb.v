`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:53:09 02/13/2017
// Design Name:   control
// Module Name:   C:/Users/Marco/Dropbox/School/WINTER 2017/161L/Labs/Lab3-MIPS_ALU/controltb.v
// Project Name:  Lab3-MIPS_ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: control
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module controltb;

	// Inputs
	reg [5:0] instr_op;

	// Outputs
	wire reg_dst;
	wire branch;
	wire mem_read;
	wire mem_to_reg;
	wire [1:0] alu_op;
	wire mem_write;
	wire alu_src;
	wire reg_write;

	// Instantiate the Unit Under Test (UUT)
	control uut (
		.instr_op(instr_op), 
		.reg_dst(reg_dst), 
		.branch(branch), 
		.mem_read(mem_read), 
		.mem_to_reg(mem_to_reg), 
		.alu_op(alu_op), 
		.mem_write(mem_write), 
		.alu_src(alu_src), 
		.reg_write(reg_write)
	);

	initial begin
		// Initialize Inputs

		// Wait 100 ns for global reset to finish
		instr_op = 0;
		#100;
		instr_op = 6'b100011;
		#100;
		instr_op = 6'b101011;
		#100;
		instr_op = 6'b000100;
		#100;
        
		// Add stimulus here

	end
      
endmodule

