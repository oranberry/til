# **Input/Output**

## **Streams**

In C, the term **stream** means any source of input or any destination for output.

- Many small program obtain all their input from one stream (the keyboard) and write all their output to another stream (the screen).
- Larger programs may need additional streams. These streams can represent files stored on various media(such as hard drives, CDs, and flash memory), but they could be associated with devices (that don't store files) such as network ports and printers.

## **File Buffering**

Transferring data to or from a disk drive is a relatively slow operation. To speed up the process, buffering (a large array) is used. Buffering can result in enormous gains in efficiency, since reading a byte from a buffer or storing a byte in a buffer is very fast. It takes time to transfer the buffer contents to or from disk, but one large “block move” is much faster than many tiny byte moves.

The functions in <stdio.h> perform buffering automatically when it seems advantageous. Data written to a stream is actually stored in a buffer area in memory; when it’s full (or the stream is closed), the buffer is “flushed.”
