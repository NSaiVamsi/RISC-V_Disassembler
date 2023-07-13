# RISC-V_Disassembler
When we are given a RISC-V machine code, this program disassembles it to the normal assembly syntax  
In this project, I did this using C, but further modifications can be done in C++ using better functionalities  
When given a machine code that doesn't satisfy given constraints, it outputs as illegal instruction  
For example:   
Lets say we are giving only 1 line of hex-code.  
Lets say we are given a code 015a04b3, the program outputs the assembly code add x9 x20 x21.  
The program can also deal with multiple lines of hex-code instructions at the sametime and gives
output to all of them  
Say 2 lines  
015a04b3  
00000000 are given inputs,  
The program outputs    
add x9 x20 x21  
Illegal Instruction  
