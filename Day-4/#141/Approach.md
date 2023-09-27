# LeetCode problem 141
Checking if a cycle exists in a linked list.

## Given
A singly linked list was given and we had to check if a cycle was present in the linked list.


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

1. We will be using 2 pointer approach to solve this problem.
2. 2 pointers, fast and slow will be initialized with "head" head of a linked list.
3. fast pointer will iterate/traverse the list by 2 and slow pointer will traverse the list by 1.
4. This way we can check if they cross/land on the same node. if they do, return true. if they dont (fast->next->next becomes null) return false.