# LeetCode problem 19
Remove Nth Node From End of Linked List.

## Given
Given the head of a linked list, remove the nth node from the end of the list and return its head.


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

The algorithm works by maintaining two pointers:

a. fast: A pointer that moves n nodes ahead of the slow pointer.
b. slow: A pointer that moves through the linked list at the same pace as the fast pointer, but starts at the head of the linked list.

The algorithm works as follows:

1. Initialize the fast pointer to the head of the linked list.
2. Initialize the slow pointer to the head of the linked list.
3. Advance the fast pointer n nodes ahead of the slow pointer.
4. If the fast pointer is null, then the nth node from the end of the linked list is the head node. In this case, return the head node's next node.
5. Otherwise, advance the slow and fast pointers together until the fast pointer reaches the end of the linked list.
6. At this point, the slow pointer is pointing to the (n + 1)th node from the end of the linked list. Remove the next node of the slow pointer.
7. Return the head node of the linked list.