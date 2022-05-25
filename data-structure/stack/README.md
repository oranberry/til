### Stack Overflow

- A call stack is used to store information about the active subroutines
- The main reason for a call stack is to keep track of the instruction for return control when a subroutine finishes executing
- A stack overflow occurs if the call stack pointer exceeds the stack bound (bound typically set by operating system, VM, or language)
- A caller pushes the return address onto the stack, and when the called subroutine finishes, the return address is popped off the stack and goes to that address
