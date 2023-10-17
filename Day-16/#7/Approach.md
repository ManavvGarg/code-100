# LeetCode problem 7
Reverse Integer

## Given
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

# Approach
The given C++ code defines a function `reverse` that takes an integer `x` as input and returns the reverse of that integer. 

1. `reverse` function:
   - This function takes an integer `x` as input and returns an integer, which is the reverse of the input integer.

2. Variables:
   - `int r = 0`: This variable is used to store the result of the reversed integer.

3. `while` Loop:
   - The code uses a `while` loop to reverse the input integer `x`. The loop continues until `x` becomes zero, indicating that all digits have been processed.

4. Reverse Logic:
   - Inside the `while` loop, there are three main steps:
     - `if (r > INT_MAX / 10 || r < INT_MIN / 10) return 0;`: This line checks if the current result `r` is about to exceed the limits of a 32-bit signed integer (INT_MAX or INT_MIN). If it's about to overflow or underflow, the function returns 0 to indicate an invalid result.
     - `r = r * 10 + x % 10;`: This line appends the last digit of `x` to the result `r` by multiplying the result by 10 (shifting its digits to the left) and adding the last digit of `x` obtained using the modulo operator (`x % 10`).
     - `x = x / 10;`: This line removes the last digit of `x` by integer division, effectively moving to the next digit to be processed.

5. Return:
   - After processing all digits of the input integer, the function returns the reversed integer stored in `r`.

This code efficiently reverses the input integer by repeatedly extracting the last digit of the input, adding it to the reversed result, and then removing the last digit from the input. It also performs overflow and underflow checks to ensure that the result stays within the bounds of a 32-bit signed integer.