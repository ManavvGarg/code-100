# LeetCode problem 15
3SUM

## Given
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

# Approach
C++ implementation of a solution to the "3Sum" problem, which is a classic problem in computer science and algorithms. 

1. The `threeSum` function takes a reference to a vector of integers called `nums` and returns a vector of vectors of integers, where each inner vector represents a unique triplet of numbers that sums to zero.

2. First, the code handles some special cases:
   - If the size of the input vector `nums` is less than 3 (i.e., not enough elements to form a triplet), it returns an empty vector.
   - If all elements in `nums` are zero, it returns a vector containing a single triplet with three zeros.

3. The code then proceeds to find the unique elements in the `nums` vector and store them back in the same vector. This step is done to eliminate duplicate values in the input and prepare the data for further processing.

4. To identify unique elements, the code uses an array called `store` as a kind of hash table. It first calculates the minimum and maximum values in the `nums` vector to determine the range of possible values. Then, it goes through each element in `nums`, increments the count for that element in the `store` array, and updates the `nums` vector with unique values. 

5. After extracting unique values, the code initializes an empty vector called `ans` to store the triplets that sum to zero. It also initializes two iterators, `l` and `r`, to point to the beginning and end of the `nums` vector (since the values are unique and sorted).

6. The code checks for special cases where it is not possible to find triplets summing to zero:
   - If all values in `nums` are either non-positive or non-negative, there's no way to form triplets that sum to zero, so it returns an empty vector.

7. The code then enters a loop to find triplets that sum to zero:
   - It starts by iterating through the `l` pointer while the value it points to is less than or equal to zero.
   - Inside the loop, it moves the `r` pointer to the right while the value it points to is greater than or equal to zero.
   - It calculates the value needed to sum to zero, which is `-(*l + *r)`, and checks if it's within the valid range based on the minimum and maximum values stored earlier.
   - The code guards against duplicate values and index boundary errors.
   - If the needed value is found in the `store` array (indicating that it exists in the input vector), it adds the triplet to the `ans` vector.
   - The `r` pointer is then decremented.

8. Finally, the function returns the `ans` vector, which contains all the unique triplets that sum to zero.