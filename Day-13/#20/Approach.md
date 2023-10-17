# LeetCode problem 20
Valid Parentheses

## Given
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

# Approach
C++ implementation of a function that checks whether a given string containing brackets (parentheses, square brackets, and curly braces) is valid.

1. The `isValid` function takes a single argument, which is a string `s` that represents the input containing brackets.

2. Inside the `isValid` function:
   - It declares a `stack<char>` named `bracketStack` to keep track of the open brackets. A stack is a data structure that follows the Last-In-First-Out (LIFO) principle, which makes it suitable for tracking matching brackets.

   - It then iterates through each character in the input string `s` using a `for` loop.

   - For each character `c` in the input string:
     - If `c` is an open bracket (i.e., '(', '[', or '{'), it is pushed onto the `bracketStack`. This keeps track of open brackets.

     - If `c` is a closing bracket:
       - It checks whether the `bracketStack` is empty. If it is empty, there's no matching open bracket for the current closing bracket, which means the input is invalid, and the function returns `false`.
       - It then calls the `isMatching` function with the current open bracket (the top element of the `bracketStack`) and the current closing bracket (`c`) to check if they match. If they don't match, the function returns `false`. Otherwise, the matching open bracket is removed from the stack using `bracketStack.pop()`.

3. After processing all characters in the input string, the function checks if there are any remaining open brackets in the `bracketStack`. If the stack is not empty at this point, it means there are unmatched open brackets, and the function returns `false`.

4. If the stack is empty and all brackets are matched correctly, the function returns `true`, indicating that the input string is valid.

5. The code also includes a private helper function, `isMatching`, which checks if two characters represent a valid open and close bracket pair. It returns `true` if they match and `false` otherwise.

In summary, this code efficiently validates bracket sequences by using a stack to keep track of open brackets and check for matching pairs as it iterates through the input string. If all brackets are properly matched and there are no extra or mismatched brackets, the function returns `true`; otherwise, it returns `false`.