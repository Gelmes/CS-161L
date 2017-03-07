`timescale 1ns / 1ps

`define WORD_SIZE 32 

module cs161_processor(
	input wire clk,
	input wire rst,
	  
	output wire [31:0] prog_count,
	output wire [5:0] instr_opcode,
	output wire [4:0] reg1_addr,
	output wire [31:0] reg1_data,
	output wire [4:0] reg2_addr,
	output wire [31:0] reg2_data,
	output wire [4:0] write_reg_addr,
	output wire [31:0] write_reg_data
);

wire [9:0] pc_temp; //program counter
wire [9:0] pc_plus_four;
reg [9:0] pc = 0; //program counter
reg true = 1;

assign pc_plus_four = pc + 4;
wire  [`WORD_SIZE-1:0] instr_instruction; 
///////////////////////////////////////////////////////
//IF/ID
defparam ifid_1.WORD_SIZE = 10;
wire [9:0] ifid_pc_plus_four;
gen_register ifid_1(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(pc_plus_four),
	.data_out(ifid_pc_plus_four) 
);
defparam ifid_2.WORD_SIZE = 32;
wire [31:0] ifid_instr_instruction;
gen_register ifid_2(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(instr_instruction),
	.data_out(ifid_instr_instruction) 
);


///////////////////////////////////////////////////////
//Control
wire reg_write;                    //out
wire [1:0] alu_op;
wire alu_src;
wire reg_dst;
wire mem_write;
wire mem_to_reg;
wire branch;
wire mem_read;
control_unit control(
 .instr_op(ifid_instr_instruction[`WORD_SIZE-1-:6]), //in  
 .reg_dst(reg_dst),    	//out
 .branch(branch),			//out
 .mem_read(mem_read),   	//out
 .mem_to_reg(mem_to_reg),   //out
 .alu_op(alu_op), //out
 .mem_write(mem_write),    //out
 .alu_src(alu_src),   	//out
 .reg_write(reg_write)		//out
);

///////////////////////////////////////////////////////
//Instruction Decode Stage
wire [`WORD_SIZE-1:0] alu_result;			//Used by ALU too
wire [`WORD_SIZE-1:0] read_data_2; 		//Used by Register too
wire [`WORD_SIZE-1:0] data_read_data;		//out
wire ifmem_mem_write;
cpumemory data_memory(
	.clk(clk),
   .rst(rst),
   .instr_read_address(pc[9:2]),
   .instr_instruction(instr_instruction),
   .data_mem_write(ifmem_mem_write), 
   .data_address(ifmem_alu_result[7:0]),    
   .data_write_data(ifmem_read_data_2),    
   .data_read_data(data_read_data) 
);

wire [`WORD_SIZE-1:0]  write_data;
wire memwb_mem_to_reg;
wire [31:0] memwb_data_read_data;
wire [31:0] memwb_alu_result;
mux_2_1 mux3(
	.select_in(memwb_mem_to_reg),						//in
	.datain1(memwb_alu_result), //in
	.datain2(memwb_data_read_data),	//in
	.data_out(write_data)				//out
);


///////////////////////////////////////////////////////
//Register Read stage
wire [4:0]  write_register; 				//in
wire [`WORD_SIZE-1:0] read_data_1 ;
wire memwb_reg_write;
wire [4:0] memwb_write_register;
cpu_registers registers(
	 .clk(clk),	
    .rst(rst), 
    .reg_write(memwb_reg_write),
    .read_register_1(ifid_instr_instruction[25:21]),
    .read_register_2(ifid_instr_instruction[20:16]), 
    .write_register(memwb_write_register), 
    .write_data(write_data),  
    .read_data_1(read_data_1),   
    .read_data_2(read_data_2)  
);

wire  [`WORD_SIZE-1:0] extended;
assign extended[`WORD_SIZE-1:0] = { {16{ifid_instr_instruction[15]}}, ifid_instr_instruction[15:0] };


///////////////////////////////////////////////////////
//IF/EX
defparam ifex_1_wb.WORD_SIZE = 1;
wire ifex_reg_write;
gen_register ifex_1_wb(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(reg_write),
	.data_out(ifex_reg_write)
);
defparam ifex_1_wb_m2r.WORD_SIZE = 1;
wire ifex_mem_to_reg;
gen_register ifex_1_wb_m2r(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(mem_to_reg),
	.data_out(ifex_mem_to_reg)
);
defparam ifex_2_m.WORD_SIZE = 1;
wire ifex_branch;
gen_register ifex_2_m(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(branch),
	.data_out(ifex_branch) 
);
defparam ifex_2_mRead.WORD_SIZE = 1;
wire ifex_mem_write;
gen_register ifex_2_mRead(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(mem_write),
	.data_out(ifex_mem_write) 
);
defparam ifex_3_ex_RegDst.WORD_SIZE = 1;
wire ifex_reg_dst;
gen_register ifex_3_ex_RegDst(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(reg_dst),
	.data_out(ifex_reg_dst) 
);
defparam ifex_4_ex_ALUOp.WORD_SIZE = 2;
wire [1:0] ifex_alu_op;
gen_register ifex_4_ex_ALUOp(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(alu_op),
	.data_out(ifex_alu_op) 
);
defparam ifex_5_ex_ALUSrc.WORD_SIZE = 1;
wire ifex_alu_src;
gen_register ifex_5_ex_ALUSrc(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(alu_src),
	.data_out(ifex_alu_src) 
);
defparam ifex_6.WORD_SIZE = 10;
wire [9:0] ifex_pc_plus_four;
gen_register ifex_6(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifid_pc_plus_four),
	.data_out(ifex_pc_plus_four) 
);
defparam ifex_7.WORD_SIZE = 32;
wire [`WORD_SIZE-1:0] ifex_read_data_1;
gen_register ifex_7(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(read_data_1),
	.data_out(ifex_read_data_1) 
);
defparam ifex_8.WORD_SIZE = 32;
wire [`WORD_SIZE-1:0] ifex_read_data_2;
gen_register ifex_8(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(read_data_2),
	.data_out(ifex_read_data_2) 
);
defparam ifex_9.WORD_SIZE = 32;
wire [`WORD_SIZE-1:0] ifex_extended;
gen_register ifex_9(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(extended),
	.data_out(ifex_extended) 
);
defparam ifex_10.WORD_SIZE = 5;
wire [4:0] ifex_instr_instruction_20_16;
gen_register ifex_10(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifid_instr_instruction[20:16]),
	.data_out(ifex_instr_instruction_20_16) 
);
defparam ifex_11.WORD_SIZE = 5;
wire [4:0] ifex_instr_instruction_15_11;
gen_register ifex_11(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifid_instr_instruction[15:11]),
	.data_out(ifex_instr_instruction_15_11) 
);

defparam mux1.WORD_SIZE = 5;
mux_2_1 mux1(
	.select_in(ifex_reg_dst),						//in
	.datain1(ifex_instr_instruction_20_16), //in
	.datain2(ifex_instr_instruction_15_11),	//in
	.data_out(write_register)				//out
);

///////////////////////////////////////////////////////
//Execute Stage

//data 1 to ALU input 1
//data 2 to mux_2_1 & to Data Memory
wire [`WORD_SIZE-1:0]mux2_out;
mux_2_1 mux2(
	.select_in(ifex_alu_src),						//in
	.datain1(ifex_read_data_2), 					//in
	.datain2(ifex_extended),	//in
	.data_out(mux2_out)						//out
);

wire [3:0] alu_out;
wire alu_zero;
alu_control alu_ctrl(
	.alu_op(ifex_alu_op),				//in
	.instruction_5_0(ifex_extended[5:0]),	//out
	.alu_out(alu_out)				//out
);
alu al(
	.alu_control_in(alu_out),
	.channel_a_in(ifex_read_data_1), 
	.channel_b_in(mux2_out),
	.zero_out(alu_zero), 
	.alu_result_out(alu_result)
);

wire [31:0] pc_alu_result;
assign pc_alu_result = (ifex_extended<<2) + ifex_pc_plus_four;

///////////////////////////////////////////////////////
//IF/MEM
defparam ifmem_1_wb.WORD_SIZE = 1;
wire ifmem_reg_write;
gen_register ifmem_1_wb(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifex_reg_write),
	.data_out(ifmem_reg_write) 
);
defparam ifmem_1_wb_m2r.WORD_SIZE = 1;
wire ifmem_mem_to_reg;
gen_register ifmem_1_wb_m2r(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifex_mem_to_reg),
	.data_out(ifmem_mem_to_reg)
);
defparam ifmem_2_m.WORD_SIZE = 1;
wire ifmem_branch;
gen_register ifmem_2_m(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifex_branch),
	.data_out(ifmem_branch) 
);
defparam ifmem_2_mRead.WORD_SIZE = 1;
gen_register ifmem_2_mRead(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifex_mem_write),
	.data_out(ifmem_mem_write) 
);
defparam ifmem_3.WORD_SIZE = 32;
wire [31:0] ifmem_pc_alu_result;
gen_register ifmem_3(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(pc_alu_result),
	.data_out(ifmem_pc_alu_result) 
);
defparam ifmem_4.WORD_SIZE = 1;
wire ifmem_alu_zero;
gen_register ifmem_4(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(alu_zero),
	.data_out(ifmem_alu_zero) 
);
defparam ifmem_5.WORD_SIZE = 32;
wire [31:0] ifmem_alu_result;
gen_register ifmem_5(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(alu_result),
	.data_out(ifmem_alu_result) 
);
defparam ifmem_6.WORD_SIZE = 32;
wire [31:0] ifmem_read_data_2;
gen_register ifmem_6(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifex_read_data_2),
	.data_out(ifmem_read_data_2) 
);
defparam ifmem_7.WORD_SIZE = 5;
wire [4:0] ifmem_write_register;
gen_register ifmem_7(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(write_register),
	.data_out(ifmem_write_register) 
);

///////////////////////////////////////////////////////
//Data path stage
wire mux4_control;
assign mux4_control = ifmem_branch & ifmem_alu_zero;

//defparam mux4.WORD_SIZE = 32;
mux_2_1 mux4(
	.select_in(mux4_control),
	.datain1(pc_plus_four), 
	.datain2(ifmem_pc_alu_result),
	.data_out(pc_temp)
);


///////////////////////////////////////////////////////
//MEM/WB
defparam memwb_1_wb.WORD_SIZE = 1;
//wire memwb_reg_write; Declared above by Registers
gen_register memwb_1_wb(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifmem_reg_write),
	.data_out(memwb_reg_write) 
);
defparam memwb_1_wb_m2r.WORD_SIZE = 1;
//wire memwb_mem_to_reg; declared above by mux3
gen_register memwb_1_wb_m2r(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifmem_mem_to_reg),
	.data_out(memwb_mem_to_reg)
);
defparam memwb_2.WORD_SIZE = 32;
//wire [31:0] memwb_data_read_data; declared by mux3
gen_register memwb_2(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(data_read_data),
	.data_out(memwb_data_read_data) 
);
defparam memwb_3.WORD_SIZE = 32;
//wire [31:0] memwb_alu_result; declared by mux3
gen_register memwb_3(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifmem_alu_result),
	.data_out(memwb_alu_result) 
);
defparam memwb_4.WORD_SIZE = 5;
//wire [4:0] memwb_write_register; declared by registers
gen_register memwb_4(
	.clk(clk),
	.rst(rst),
	.write_en(true),
	.data_in(ifmem_write_register),
	.data_out(memwb_write_register) 
);


assign prog_count = pc;
assign instr_opcode = ifid_instr_instruction[`WORD_SIZE-1-:6];
assign reg1_addr = ifid_instr_instruction[25:21];
assign reg1_data = read_data_1;
assign reg2_addr = ifid_instr_instruction[20:16];
assign reg2_data = read_data_2;
assign write_reg_addr = memwb_write_register;
assign write_reg_data = write_data;

always @(posedge clk, posedge rst) begin
	if(rst == 1) begin
		pc = 'b0;
	end else begin
		pc = pc_temp;
	end
end

endmodule
