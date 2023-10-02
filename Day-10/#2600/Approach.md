# LeetCode problem 2600
K Items With the Maximum Sum

## Given
There is a bag that consists of items, each item has a number 1, 0, or -1 written on it.

You are given four non-negative integers numOnes, numZeros, numNegOnes, and k.

The bag initially contains:

numOnes items with 1s written on them.
numZeroes items with 0s written on them.
numNegOnes items with -1s written on them.
We want to pick exactly k items among the available items. Return the maximum possible sum of numbers written on the items.

# Approach

The purpose of this function is to calculate the maximum possible sum of a sequence of integers, where the sequence is constructed from three different types of integers: 1, 0, and -1. The function takes four integer parameters:

numOnes: The number of times the integer 1 can be included in the sequence.
numZeros: The number of times the integer 0 can be included in the sequence.
numNegOnes: The number of times the integer -1 can be included in the sequence.
k: The length of the sequence to be constructed.
Here's how the code works:

1. It initializes two integer variables, sum and picked, to zero. sum will be used to keep track of the sum of the sequence, and picked is not used in this code snippet.

2. It enters a for loop that iterates k times, where k is the desired length of the sequence.

3. Inside the loop, it checks three conditions in order:

    a. If numOnes is greater than zero, it means there are remaining 1s that can be added to the sequence. In this case, it adds 1 to the sum and decrements numOnes by 1.

    b. If numZeros is greater than zero and there are no remaining 1s to add, it means there are remaining 0s that can be added to the sequence. In this case, it adds 0 to the sum and decrements numZeros by 1.

    c. If neither of the above conditions is met, it means there are no more 1s or 0s left to add to the sequence, so it adds -1 to the sum.

4. After the loop completes, the function returns the calculated sum, which represents the maximum possible sum of the sequence of length k using the available 1s, 0s, and -1s based on the given counts (numOnes, numZeros, and numNegOnes).