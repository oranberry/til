// Max Consecutive Ones
// Given a binary array nums, return the maximum number of consecutive 1's in the array.

// Example 1
// Input: nums = [1,1,0,1,1,1]
// Output: 3
// Explanation: The first two digits or the last three digits are consecutive 1s.
// The maximum number of consecutive 1s is 3.

// Example 2
// Input: nums = [1,0,1,1,0,1]
// Output: 2

// Constraints:
// The length of input array is a positive integer and will not exceed 10,000
// nums[i] is either 0 or 1

#include <iostream>
using namespace std;

int main()
{

    return 0;
}

// Algorithm
// Maintain a counter for the number of 1's.
// Increment the counter by 1, whenever you encounter a 1.
// Whenever you encounter a 0,
// 1. Use the current count of 1's to find the maximum contiguous 1's till now.
// 2. Afterwards, reset the counter for 1's to 0.
// Return the maximum in the end.

// Time Complexity: O(N), where N is the number of elements in the array.