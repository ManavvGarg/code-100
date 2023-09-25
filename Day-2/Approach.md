# LeetCode problem 148
Sorting a linked list in nlogn complexity

## Given
A singly linked list was given and we had to sort it in nlogn time complexity.


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

### ListNode* sortList(ListNode* head): This function takes the head of a linked list as input and returns the head of the sorted linked list.

1. Base case: If the head is NULL or there's only one element in the list, it returns the head.

2. It initializes three pointers: slow, fast, and temp. The slow and fast pointers are used to find the middle of the linked list, while temp is used to store the previous node of the slow pointer.

3. The while loop iterates through the list with fast moving twice as fast as slow. When fast reaches the end of the list, slow will be at the middle.

4. The list is then split into two parts by setting temp->next to NULL.

5. Recursively call sortList on both halves (left and right) of the list.

6. Finally, the two sorted halves are merged using the mergeList function and the head of the merged list is returned.

### ListNode* mergeList(ListNode *l1, ListNode *l2): This function takes two sorted linked lists (l1 and l2) as input and returns the head of the merged sorted linked list.

1. It creates a dummy node ans with value -1 and initializes a pointer ptr to point to this dummy node.

2. If either l1 or l2 is NULL, it returns the non-NULL list.

3. The while loop iterates through both lists until one of them becomes NULL. At each step, it compares the values of the current nodes in l1 and l2. The node with the smaller value is connected to the ptr node, and the corresponding list pointer (l1 or l2) is moved to the next node.

4. After the loop, if there are still remaining nodes in either l1 or l2, they are connected to the ptr node since they are already sorted.

5. Finally, the function returns the next node of the dummy node ans, which is the head of the merged sorted list.

# However, A new problem arised
A problem arised when it started taking too much memory. It was efficient in giving results (good time complexity) but was taking to much memory.

#### Solution
To make it more efficient, in `mergeList` function instead of creating a new dummy node, we can directly link the nodes and do the comparison between the node's values/data and return the pointer to the merged list.

In this version, we've removed the dummy node (ListNode(-1)) and instead initialized ptr and ans with either l1 or l2, depending on which has the smaller value. This reduces the memory usage slightly by avoiding the creation of an extra node.


Example: <br/><br/>
![Alt text](image.png) <br /> <br />
![Alt text](image-1.png)