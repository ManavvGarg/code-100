# LeetCode problem 5
Longest Palindromic Substring

## Given
Given a string s, return the longest palindromic substring in s.
 

Example 1:

 | Input: s = "babad"
 | Output: "bab"
 | Explanation: "aba" is also a valid answer.

Example 2:

 | Input: s = "cbbd"
 | Output: "bb"

# Approach
This code uses a different approach known as "Expand Around Center."

1. `longestPalindrome` function:
   - This function takes a single input parameter, a string `s`, and returns a string, which is the longest palindromic substring found in the input string.

2. Variables:
   - `i` is an integer that tracks the current index in the input string `s`.
   - `n` is the length of the input string `s`.
   - `max_start` is an integer that stores the starting index of the longest palindromic substring found so far.
   - `max_len` is an integer that stores the length of the longest palindromic substring found so far.

3. Initial Check:
   - If the length of the input string is less than or equal to 1, it means the string itself is a palindrome (or empty), so the function immediately returns the input string `s`.

4. Main Loop:
   - The main loop, controlled by the `i` variable, iterates through the input string character by character.

5. Expanding Around Center:
   - For each character at index `i`, the code tries to expand around the center to find the longest palindrome. It does this by:
     - Initializing `j` and `k` to `i`, which represents a palindrome of a single character.
     - In the first while loop, it checks if the characters at `k` and `k+1` are the same. If they are, it expands the palindrome by incrementing `k`. This handles cases where there are consecutive identical characters in the string.
     - After this while loop, `k` represents the end index of the current palindrome substring.
     - In the second while loop, it checks if the characters at `j-1` and `k+1` are the same. If they are, it expands the palindrome by decrementing `j` and incrementing `k`. This handles cases where the palindrome is centered at the current character.
     - If the length of the palindrome found (i.e., `k - j + 1`) is greater than the `max_len` found so far, it updates `max_len` and `max_start` to the new values.

6. Continue Loop:
   - After finding the longest palindrome centered at the current character, the loop continues to the next character (if any).

7. Return:
   - After iterating through the entire input string, the function returns the longest palindromic substring found using `s.substr(max_start, max_len)`.

This "Expand Around Center" approach is more efficient than checking all possible substrings, as it takes advantage of the properties of palindromes to avoid redundant checks. It has a time complexity of O(n^2), where n is the length of the input string.