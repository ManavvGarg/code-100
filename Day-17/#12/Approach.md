# LeetCode problem 7
Integer to Roman

## Given
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.

Given an integer, convert it to a roman numeral.

# Approach
The given C++ code defines a function `intToRoman` that converts an integer `num` into its Roman numeral representation.

1. `intToRoman` function:
   - This function takes an integer `num` as input and returns a string, which is the Roman numeral representation of the input integer.

2. Variables:
   - `string roman = "";`: This variable is used to store the Roman numeral representation.

3. Roman Numeral Conversion:
   - The code uses a series of `while` loops and `if` conditions to convert the integer into its Roman numeral representation. The approach is based on subtracting the largest possible Roman numeral value from the integer and appending the corresponding Roman numeral to the `roman` string.

4. `while` Loops:
   - The `while` loops check if the integer is greater than or equal to a specific Roman numeral value and then append the corresponding Roman numeral to the `roman` string. It also subtracts the value from the integer.

5. `if` Conditions:
   - The `if` conditions handle cases where a smaller Roman numeral needs to be subtracted before a larger Roman numeral. For example, "CM" for 900 or "IV" for 4.

6. Return:
   - After processing the integer and constructing the Roman numeral representation in the `roman` string, the function returns this string.

The code essentially builds the Roman numeral representation of the input integer step by step, starting with the largest possible Roman numerals and moving down to smaller ones as needed. This approach ensures that the Roman numerals are correctly constructed according to the rules of Roman numeral notation.