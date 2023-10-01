# LeetCode problem 82
Remove Duplicates from Sorted List II

## Given
Given the head of a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list. Return the linked list sorted as well.


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

Here's what each part of the code does:

1. **Check for Base Cases:**
The function first checks if the head pointer is NULL or if the head's next pointer is NULL. If either of these conditions is true, it means there are no or only one node in the linked list, so there are no duplicates to remove. In such cases, the function simply returns the head as it is.

2. **Initialize Pointers:**
A new node called dummy is created with a value of 0. This dummy node is used to simplify the code when handling the head of the linked list.
Three pointers are initialized:
curr: It initially points to the head of the linked list and is used to iterate through the list to find duplicates.
prev: It initially points to the dummy node and is used to keep track of the node before the current node.
dummy->next is set to point to the head, ensuring that the dummy node is always connected to the beginning of the linked list.

3. **Main Loop:**
A while loop iterates as long as curr is not NULL and curr->next is not NULL. This loop is used to traverse the linked list and identify duplicate elements.

4. **Check for Duplicates:**
Inside the loop, it compares the value of the current node (curr) with the value of the next node (curr->next). If they are equal, it means a duplicate has been found.

5. **Remove Duplicates:**
If a duplicate is found, it enters another inner while loop to advance curr until it reaches a node with a different value. This effectively skips all the nodes with the same value as the current node.
After the inner loop exits, it means all duplicate nodes with the value n have been skipped, so it updates the prev->next to point directly to the current node (curr).

6. **Move to Next Node:**
If no duplicates are found in the current sequence of nodes, it simply updates prev to curr and moves curr to the next node in the linked list.

7. **Return the Modified List:**
After processing the entire linked list, the function returns dummy->next, which points to the head of the modified linked list with duplicates removed.