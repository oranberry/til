#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;

    // This is how we can create an array for 10 integers (size can not be changed later)
    int nums[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // 🔎 The Array can only hold up to 10. If we get a 11th element, we'll need to make a new Array!
    // 왜 array 크기를 처음부터 크게 만들지 않을까？ -> 불필요한 메모리를 너무 많이 차지하게 된다.
    // If you make an Array with 1000000 spaces, the computer will reserve memory to hold 1000000 element, even if you only put 10 DVDs into it.

    // we can access items with indexes in O(1)
    cout << nums[2] << "\n"; // 3

    // if we want to update and know the index: we can do it in O(1) again
    nums[2] = 100;
    cout << nums[2] << "\n"; // 100

    // if we DO NOT know the index of the item we are looking for,
    // we have to consider all the items one by one - this is called linear search with O(N) linear running time
    // This is one of the main disadvantages of array data structure (Not best option)
    for (int i = 0; i < SIZE - 1; i++)
    {
        if (nums[i] == 8)
            cout << "Index of the item we are looking for is " << i << "\n";
    }

    // remove a given item from the array

    // OK we can remove it but there is a "hole" in the data structure
    // so we have to shift all items
    nums[2] = 0;

    // this is why this operation has O(N) running time
    for (int i = 2; i < SIZE - 1; i++)
        nums[i] = nums[i + 1];

    nums[SIZE - 1] = 0;

    // show the items
    for (int i = 0; i < SIZE - 1; i++)
        cout << nums[i] << "\n";

    return 0;
}