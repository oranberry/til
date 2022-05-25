## Circularly Linked Lists

Typically refers to a singly linked node structure, but can be doubly linked. No head or tail, the “last node” is linked to the first node.  
Cannot traverse like other linked lists: `while(current->next != nullptr)`  
If a list is circular and doubly linked, the first node points to the last node of the list

#### Advantages/Disadvantages

**Advantages**

- We can go to any node and traverse from any node. We just need to stop when we visit the same node again.
- As the last node points to the first node, going to the first node from the last node just takes a single step.

  **Disadvantages**

- Reversing a circular linked list is cumbersome.
- As the nodes are connected to form a circle, there is no proper marking for beginning or end for the list. Hence, it is difficult to find the end of the list or loop control. If not taken care, an implementation might end up in an infinite loop.
- We cannot go back to the previous node in a single step. We have to traverse the entire list from first.

#### Applications of Circular Linked List

- Real-time application of circular linked list can be a multi-programming operating system wherein it schedules multiple programs. Each program is given a dedicated timestamp to execute after which the resources are passed to another program. This goes on continuously in a cycle. This representation can be efficiently achieved using a circular linked list.
- Games that are played with multiple players can also be represented using a circular linked list in which each player is a node that is given a chance to play.
- We can use a circular linked list to represent a circular queue. By doing this, we can remove the two pointers front and rear that is used for the queue. Instead, we can use only one pointer.

#### Basic Operations

- Insertion
  - Insert in an empty list
  - Insert at the beginning of the list
  - Insert at the end of the list
  - Insert in between the list
  - After the node is located, we perform the following steps.
- Deletion

  - The deletion operation of the circular linked list involves locating the node that is to be deleted and then freeing its memory.
  - For this we maintain two additional pointers curr and prev and then traverse the list to locate the node. The given node to be deleted can be the first node, the last node or the node in between. Depending on the location we set the curr and prev pointers and then delete the curr node.

- Traversal
  - Traversal is a technique of visiting each and every node. In linear linked lists like singly linked list and doubly linked lists, traversal is easy as we visit each node and stop when NULL is encountered.
  - However, this is not possible in a circular linked list. In a circular linked list, we start from the next of the last node which is the first node and traverse each node. We stop when we once again reach the first node.
