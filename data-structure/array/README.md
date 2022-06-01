## 💫 **Arrays**

- Arrays are data structures where all the items are identified by an integer value starting with 0 (**index**).
- Every single item (value) can be identified with a given index.
- Usually we can store items of the same type.
- We can create multi-dimensional arrays as well. Every single item (value) can be identified with 2 indexes - rowIndex and columnIndex.
- **Advantage**: accessing the items based on index (**random access**).
- The items of the array are located right next to each other in the main memory (RAM, Random Access Memory) - so they can accessed by the index.  
  memory address = array's address + index \* data size (ex. 4 btye (32 bits))
- **O(1) running time**.
- There are two types of array, static arrays and dynamic arrays
  - static array (size of the array does not change )
  - dynamic array (size of the array may change dynamically)
- More complex data structures (ex. stacks queues and hash-tables) rely heavily on arrays because of **random indexing - O(1)** access of items with known indexes
- **Numerical methods** use arrays: most the operations can be achieved quite efficiently - matrix related operations.

#### Arrays Operations

1. Adding items: we can insert new items at the end of the data structure until the data structure is not full - O(1) running time

   - Start with a small sized array: we do not waste meomry BUT we have to resize the array often with O(N) running time
   - Allocate a huge array at the beginning: we do waste memory because of the large size but at least we do not have to bother with the resize operation
   - Memory and running time trade-off.
   - ⚡️ What is the data structure becomes full?  
     We have to allocate a larger chunk of memory in the RAM (usually 2x the size of the actual array) and have to copy the existing items one by one to the new array. Because of these operations: the resize operation take O(N) linear running time complexity.

2. Adding numbers to arbitrary positions: we want to insert an item to an arbitrary position - so associated with a given index.

   - We have to shift every single item that has higher index values than the actual one.
   - It is O(N) linear running time algorithm because the items must be shifted.
   - In the worst case, if we want to insert a new item with index zero, then we have to shift all the items.

3. Removing last item: removing the last item of an array data structure is quite easy and fast operation - O(1) running time

   - Removing the last item is quite fast

4. Removing item from arbitrary positions: usually we do not know the index of the item we want to remove. After removing the item we have to deal with the holes in the data structures. so we have to make sure that the items are going to be shifted one step upwards.

   - First we have to find the item in O(N) running time then remove the item in O(1) and finally have to shift the other items in O(N)

**Conclusion**  
**Manipulating the last item (insertion or removal)**:  
if we want to mannipulate the last item of an array data structure where we insert the new items or remove a given item, then it is going to be fine. (O(1) running time - this is why we like arrays)  
**Manipulating arbitrary item (insertion or removal)**:  
O(N) running time - if these kinds of operations will dominate then array data structure is not the best option. Because of this linear running time complexity, we can do better than linear running time.

### **Advantages**

- The best feature of arrays is random access: we can access arbitrary items extremely fast with indexes
- Quite an easy data structure: easy to understand and easy to implement as well
- Arrays are fast data structures in the main
- Use arrays when you want to manipulate the last items of the data structure or you want to access items with known indexes.

### **Disadvantages**

- We have to know the number of items we want to store at complile time: so it is not a dynamic data structure
- Since it is not dynamic: whenever the data structure is full, we have to resize it in O(N) linear running time
- Usually we can not store items with different types in an array - Python is exception.
