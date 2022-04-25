## Pointer

main memory is divided into bytes (1 byte = 8 bits).  
✨ **Each byte has a unique address** ✨ to distinguish it from the other bytes in memory.

An executable program consists of both code (machine instructions corresponding to statements in the original C program) and data (variables in the original program). Each variable in the program occupies one or more bytes of memory; **the address of the first byte is said to be the address of the variable**.

Although addresses are represented by numbers(ex. 0x0000), we can't necessarily store them(address) in ordinary integer variables. We can store them(address) in special **pointer variables**.

When we store the address of a variable i in the pointer variable p, we say that p "points to" i. In other words, a pointer is nothing more than an address, and a **pointer variable is just a variable that can store an address**.
