`timescale 1ns / 1ps

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

