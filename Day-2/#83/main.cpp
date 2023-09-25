
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */


#include <stdio.h>
#include <iostream>
#include <unordered_set>

using namespace std;

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
      if(head== NULL || head-> next == NULL) return head;
        ListNode * curr = head; //initializing a new node with value of head
        ListNode * prev = NULL; //null

        unordered_set<int> seen; //unordered set to check for seen values.

        while(curr != NULL) { // while curr (head) is not equal to null
            if(seen.find(curr->val) != seen.end()) { //if the value we are comparing is in the set, we delete it.
              prev->next = curr->next;
              delete(curr);
            }

            else { //else insert the newly found node in seen.
              seen.insert(curr->val);
              prev = curr;
            }

            //update curr with prev->next
            curr = prev->next;
        }
        return head;
    }
};