## Queue: First-in-first-out (FIFO)

1. Understand the definition of FIFO and queue
   In a FIFO data structure, the first element added to the queue will be processed first. The insert operation is also called **enqueue** and the new element is always added at the end of the queue. The delete operation is called **dequeue**. You are only allowed to remove the first element.

   - (front/head) 5, 13, 8, 2, 10 (back/tail) ---Enqueue(6)---> (front/head) 5, 13, 8, 2, 10, 6 (back/tail)
   - (front/head) 5, 13, 8, 2, 10, 6 (back/tail) ---Dequeue---> (front/head) 13, 8, 2, 10, 6 (back/tail)

   To implement a queue, we may use a dynamic array and an index pointing to the head of the queue. As mentioned, a queue should support two operations: enqueue and dequeue. Enqueue appends a new element to the queue while dequeue removes the first element. So we need an index to indicate the starting point.

   Drawback: The implementation above is straightforward but is inefficient in some cases. With the movement of the start pointer, more and more space is wasted. And it will be unacceptable when we only have a space limitation.
