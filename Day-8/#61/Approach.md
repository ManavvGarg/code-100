# LeetCode problem 61
Rotate a Linked List by 'K'

## Given
Given the head of a linked list, rotate the list to the right by k places.


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

1. First, it checks if your chain is empty or has only one item. If it's empty or has just one item, there's nothing to twist, so it returns the chain as it is.
2. Next, it figures out the total number of items in your chain.
3. Then, it connects the last item in your chain to the first item, making it a loop or circle. This is like joining the last and first links of the chain together.
4. It calculates how much you want to twist the chain by taking 'k' and making sure it's not more than the total number of items. For example, if your chain has 10 items, and 'k' is 12, it's the same as twisting it by 2 (12 % 10 = 2).
5. It figures out where to start the twist. Let's say you have 10 items and you want to twist by 2. You would start from the 8th item (10 - 2 = 8).
6. It then goes to that starting point in your twisted chain and says, "Okay, now this item is the new start of the chain."
7. It breaks the loop or circle by cutting the connection between the new start and the item that used to be the start. Now you have a straight chain again.
8. Finally, it gives you the new start of the twisted chain as the result.