`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:19:40 01/09/2017 
// Design Name: 
// Module Name:    fulladder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module fulladder(
    input A,
    input B,
    input Cin,
    output Sum,
    output Cout
    );
	 
wire S1, T1, T2, T3;

xor X1 (S1, A, B);
xor X2 (Sum, S1, Cin);
and a1 (T3, A, B);
and a2 (T2, A, Cin);
and a3 (T1, B, Cin);
or  oc (Cout, T1, T2, T3 );

endmodule
