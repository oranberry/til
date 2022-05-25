## Doubly Linked Lists

Removing any node other than the head in a singly linked list is not easy, since we do not have a quick way of accessing the node immediately preceding the one we want to remove.

There is a type of linked list that allows us to go in both directions—forward and reverse—in a linked list. It is the **doubly linked list**. In addition to its element member, a node in a doubly linked list stores two pointers, a **next** link and a **prev** link, which point to the next node in the list and the previous node in the list, respectively. Such lists allow for a great variety of quick update operations, including efficient insertion and removal at any given position.

**Header and Trailer Sentinels**  
To simplify programming, it is convenient to add special nodes at both ends of a doubly linked list: a **header** node just before the head of the list, and a **trailer** node just after the tail of the list. These “dummy” or **sentinel** nodes do not store any elements. They provide quick access to the first and last nodes of the list. In particular, the header’s next pointer points to the first node of the list, and the prev pointer of the trailer node points to the last node of the list.

Nodes contains the next link, a second link pointing to the previous node, and data.  
Requires a head and tail pointer.

#### Advantages and Disadvantages of Double Linked Lists

**Advantages**

- We can traverse in both directions i.e. from starting to end and as well as from end to starting.
- It is easy to reverse the linked list.
- If we are at a node, then we can go to any node. But in linear linked list, it is not possible to reach the previous node.

**Disadvantages**

- As the doubly linked list contains one more extra pointer i.e. previous, the memory space taken up by the doubly linked list is larger when compared to the singly linked list.
- Since two pointers are present i.e. previous and next, all the operations performed on the doubly linked list have to take care of these pointers and maintain them thereby resulting in a performance bottleneck.

#### Applications of Doubly Linked List

A doubly linked list can be applied in various real-life scenarios and applications as discussed below.

- A Deck of cards in a game is a classic example of a doubly linked list. Given that each card in a deck has the previous card and next card arranged sequentially, this deck of cards can be easily represented using a doubly linked list.
- Browser history/cache – The browser cache has a collection of URLs and can be navigated using the forward and back buttons is another good example that can be represented as a doubly linked list.
- Most recently used (MRU) also can be represented as a doubly linked list.
- Other data structures like Stacks, hash table, the binary tree can also be constructed or programmed using a doubly linked list.

#### Basic Operations

- Insertion: Insertion operation of the doubly linked list inserts a new node in the linked list. Depending on the position where the new node is to be inserted, we can have the following insert operations.
  - Insertion at front: inserts a new node as the first node.
  - Insertion at the end: inserts a new node at the end as the last node.
  - Insertion before a node: Given a node, inserts a new node before this node.
  - Insertion after a node: Given a node, inserts a new node after this node.
- Deletion: Deletion operation deletes a node from a given position in the doubly linked list.
  - Deletion of the first node: Deletes the first node in the list
  - Deletion of the last node – Deletes the last node in the list.
  - Deletion of a node given the data – Given the data, the operation matches the data with the node data in the linked list and deletes that node.
- Traversal: Traversal is a technique of visiting each node in the linked list. In a doubly linked list, we have two types of traversals as we have two pointers with different directions in the doubly linked list.
  - Forward traversal: Traversal is done using the next pointer which is in the forward direction.
  - Backward traversal: Traversal is done using the previous pointer which is the backward direction.
- Reverse: This operation reverses the nodes in the doubly linked list so that the first node becomes the last node while the last node becomes the first node.
- Search: Search operation in the doubly linked list is used to search for a particular node in the linked list. For this purpose, we need to traverse the list until a matching data is found.
