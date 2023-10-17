# LeetCode problem 27
Remove Element

## Given
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.

Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:

Change the array nums such that the first k elements of nums contain the elements which are not equal to val. The remaining elements of nums are not important as well as the size of nums.
Return k.

# Approach
step-by-step:

1. The `int removeElement(vector<int>& nums, int val)` function takes two arguments:
   - `nums`: A reference to a vector of integers, which is the input vector that we want to modify by removing elements equal to `val`.
   - `val`: An integer value that we want to remove from the `nums` vector.

2. It initializes an integer variable `index` to 0. This variable will be used to keep track of the current position in the modified vector where non-`val` elements are placed.

3. The function then enters a `for` loop that iterates through each element of the `nums` vector. The loop variable `i` is used to traverse the vector.

4. Inside the loop:
   - It checks if the current element `nums[i]` is not equal to the specified `val`. If `nums[i]` is not equal to `val`, it means the element should be kept in the modified vector.

   - If the condition is met (i.e., `nums[i] != val`), it assigns the value of `nums[i]` to the position specified by `index` in the `nums` vector. This effectively removes the `val` from the modified part of the vector and keeps non-`val` elements.

   - After updating the value in the `nums` vector, it increments the `index` by 1 to prepare for the next non-`val` element.

5. The loop continues until it has checked all elements in the `nums` vector.

6. Finally, the function returns the value of `index`. This returned value represents the new length of the modified `nums` vector, where all instances of `val` have been removed.
