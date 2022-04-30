// File I/O
// Before we can read or write a file, we have to open the file.

// 💫 fopen() Standard IO Library Function
// - Open a files as a stream.
// - identifies a file and specifies what we want to do with the file.
// - creates a FILE (defined in stdio.h) struct and returns a pointer to it.

// The fopen() function example
FILE *pFile;
pFile = fopen("test.txt", "r");
// "test.txt" - File Name (current working directory)
// "r" - Read the file

// fopen returns a FILE pointer that the program can (and usually will) save in a variable.
// When it can’t open a file (e.g. File not found), fopen returns a null pointer.
FILE *pFile;
pFile = fopen("text.txt", "r");
if (pFile == NULL)
{
    printf("Error opening file.\n");
    return 1; // abnormal termination
}

// Mode: specifies what operations we intend to perform on the file
// "r"	Open for reading (file need exist)
// "w"	Open for writing (file need not exist)
// "a"	Open for appending (file need not exist)

// Note that there are different mode strings for writing data and appending data.
// When data is written to a file, it normally overwrites what was previously there.
// When a file is opened for appending, data written to the file is added at the end.