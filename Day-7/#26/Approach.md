# LeetCode problem 26
Remove Duplicates from Sorted Array

## Given
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.

Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
Return k.

# Approach

The algorithm works by maintaining two pointers:

1. i: A pointer to the current element in the input array.
2. j: A pointer to the current element in the output array.
3. The algorithm starts by copying the first element of the input array to the output array. Then, it iterates over the remaining elements of the input array. 
4. If the current element is different from the previous element, the algorithm copies it to the output array and increments j. 
5. Otherwise, the algorithm skips the current element.
6. After the algorithm has finished iterating over the input array, it returns the value of j, which is the number of unique elements in the output array.