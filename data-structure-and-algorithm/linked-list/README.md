# **Linked Lists**

Similar to the array, the linked list is also a linear data structure. Each element in the linked list is actually a separate object while all the objects are linked together by the reference field in each element. There are two types of linked list: singly linked list and doubly linked list.

## **Singly Linked List**

Each node in a singly-linked list contains not only the value but also a reference field to link to the next node. By this way, the singly-linked list organizes all the nodes in a sequence. In most cases, we will use the head node (the first node) to represent the whole list.

- Operations: Unlike the array, we are not able to access a random element in a singly-linked list. If we want to get the i-th element, we have to traverse from the head node one by one. It takes us O(N) time on average to visit an element by index, where N is the length of the linked list.

  - **insert(add) operation**  
    If we want to add a new value after a given node `prev`, we should:

    1. initialize a new node `cur` with the given value
    2. Link the "next" field of `cur` to prev's next node `next`
    3. Link the "next" field in `prev` to `cur`.

    Unlike an array, we don’t need to move all elements past the inserted element. Therefore, you can insert a new node into a linked list in O(1) time complexity, which is very efficient.

    - Add a node at the beginning  
      As we know, we use the head node head to represent the whole list. So it is essential to update head when adding a new node at the beginning of the list.
      1. Initialize a new node `cur`
      2. Link the new node to our original head node `head`
      3. Assign `cur` to `head`.

  - **delete operation**  
    If we want to delete an existing node `cur` from the singly linked list, we can do it in two steps:

    1. Find cur's previous node `prev` and its next node `next`
    2. Link `prev` to cur's next node `next`

    It is easy to find out `next` using the reference field of cur. However, we have to traverse the linked list from the head node to find out `prev` which will take **O(N) time** on average, where N is the length of the linked list. So the time complexity of deleting a node will be O(N).  
    The space complexity is O(1) because we only need constant space to store our pointers.

    - Delete the first node
      If we want to delete the first node, the strategy will be a little different. As we mentioned before, we use the head node head to represent a linked list. If we want to delete the first node, we can simply assign the next node to head.

## **Doubly Linked List**

The aim is to be able to store items efficiently (insertion and removal operations).  
Arrays have a huge disadvantage: there may be holes in the data structure and we have to shift a lot of items. This problem can be eliminated by linked lists.

- Every node stores the data itself and a reference the next node in the linked list data structure.
  - We have access to the first node of the linked list (head node)
  - Other items can be accessed starting with this node
  - Last node of the linked list is pointing to a NULL
- This is why Linked List need more memory than arrays
- It has an advantage: there can not be hole in the data structure so there is no need for shifting items.
- Easy data structures and easy to implement them
- The items are not stored next to each other in the memory
