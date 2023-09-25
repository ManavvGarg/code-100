# LeetCode problem 33
Search in Rotated Sorted Array

## Given
Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.


# Approach

### int search(vector<int>& nums, int target): 

This function takes a vector of integers nums and an integer target as input. It searches for the target value in the rotated sorted array and returns its index if found; otherwise, it returns -1.

1. It initializes two pointers, start and end, representing the start and end indices of the search range within the vector.
The while loop continues until the search range becomes empty (start > end).

2. It calculates the middle index mid by averaging start and end.

3. If the middle element is equal to the target, the function returns the index mid.

4. If the left half of the search range (from start to mid) is sorted:  
    - If the target lies within this sorted left half, update end to mid - 1. 
    - Otherwise, update start to mid + 1.

5. If the right half of the search range (from mid to end) is sorted:
    - If the target lies within this sorted right half, update start to mid + 1. Otherwise, update end to mid - 1.

6. If the target is not found after the loop, the function returns -1.