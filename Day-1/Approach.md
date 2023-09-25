# Approach for LeetCode problem 21
Merging two sorted linked lists into a single linked list

## Approach
It was given that two sorted linked lists were to be merged into a single linked list that was also sorted.
The structure of linked list was given as:


Definition for singly-linked list.

```java
  public class ListNode {
      int val;
      ListNode next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
  }
```

 So I made a dummy node, "prehead" and initialized it with value of -1. Then cur pointer is initliazed to prehead.

1. If l1.val is less than or equal to l2.val, it means the current node in list1 should come before or be equal to the current node in list2 in the merged list. So, it sets cur.next to l1 and moves l1 to its next node by updating l1 = l1.next. This effectively adds l1 to the merged list.

2. If l1.val is greater than l2.val, it means the current node in list2 should come before the current node in list1 in the merged list. So, it sets cur.next to l2 and moves l2 to its next node by updating l2 = l2.next. This effectively adds l2 to the merged list.

3. After adding a node to the merged list, it moves the cur pointer to the newly added node by updating cur = cur.next.

4. The loop continues until one of the input lists becomes null. At this point, it exits the loop.

5. Finally, the code checks if either l1 or l2 is still not null and attaches the remaining elements to the end of the merged list. It does this by using the ternary operator l1 == null ? l2 : l1. If l1 is null, it means all elements in list1 have been merged, so it attaches the remaining elements in list2. If l2 is null, it attaches the remaining elements in list1.

6. The merged list is complete, and the code returns the next node after prehead, which is the actual head of the merged list.


Example: <br/><br/>
![Alt text](image.png)