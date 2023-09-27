# LeetCode problem 2
Checking if a cycle exists in a linked list.

## Given
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.


Definition for singly-linked list.

```cpp
  struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
```

# Approach

The program goes through the following steps:

1. If one of the input numbers is empty (not provided), the program returns the other number as the result.
2. It sets up a new empty linked list to store the result of the addition.
3. It starts going through both input linked lists, adding the digits from each list together along with any carry-over from the previous step.
4. After adding the digits, it calculates the carry-over for the next step and saves the current digit in the result linked list.
5. It continues this process until it reaches the end of both input linked lists and there's no carry-over left.
6. Finally, it returns the resulting linked list containing the sum of the two input numbers.