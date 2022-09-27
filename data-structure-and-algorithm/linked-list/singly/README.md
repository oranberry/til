## 💫 Singly Linked Lists

Arrays are nice and simple for storing things in a certain order, but they have drawbacks. They are not very adaptable.  
For instance, we have to fix the size n of an array in advance, which makes resizing an array difficult. Insertions and deletions are difficult because elements need to be shifted around to make space for insertion or to fill empty positions after deletion.

An important alternate implementation of sequence is the **singly linked list**.

A **linked list** is a collection of nodes that together form a linear ordering. Each node stores a pointer, called next, to the next node of the list. In addition, each node stores its associated element.

The next pointer inside a node is a **link** or **pointer** to the next node of the list. Moving from one node to another by following a next reference is known as **link hopping** or **pointer hopping**. The first and last nodes of a linked list are called the **head** and **tail** of the list, respectively. Thus, we can link-hop through the list, starting at the head and ending at the tail. We can identify the tail as the node having a null next reference. The structure is called a **singly linked list** because each node stores a single link.

Like an array, a singly linked list maintains its elements in a certain order, as determined by the chain of next links. Unlike an array, a singly linked list does not have a predetermined fixed size. It can be resized by adding or removing nodes.
