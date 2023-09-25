/*

======= Old inefficient code =======

class Solution {
public:
    ListNode* sortList(ListNode* head) {

      if(head == NULL || head->next == NULL) return head;

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *temp = NULL;

        while(fast != NULL && fast->next != NULL) {
          temp = slow;
          slow = slow->next;
          fast = fast->next->next;
        }

        temp -> next = NULL;
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);

        return mergeList(left, right);
    }

    ListNode* mergeList(ListNode *l1, ListNode *l2) {
        ListNode * ans = new ListNode(-1);
        ListNode *ptr = ans;

        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;

        while(l1 != NULL && l2 != NULL) {
          if(l1->val <= l2->val) {
            ptr->next = l1;
            ptr = l1;
            l1 = l1->next;
          }

          else {
            ptr->next = l2;
            ptr = l2;
            l2 = l2->next;
          }
        }

        if(l1 !=NULL) { ptr->next= l1; }
        if(l2 != NULL) { ptr->next= l2; }

        return ans->next;
    }
};

*/

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
    ListNode* sortList(ListNode* head) {

        if(head == NULL || head->next == NULL) return head;

        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *temp = NULL;

        while(fast != NULL && fast->next != NULL) {
            temp = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        temp -> next = NULL;
        ListNode* left = sortList(head);
        ListNode* right = sortList(slow);

        return mergeList(left, right);
    }

    ListNode* mergeList(ListNode *l1, ListNode *l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;

        ListNode *ptr;

        if(l1->val <= l2->val) {
            ptr = l1;
            l1 = l1->next;
        } else {
            ptr = l2;
            l2 = l2->next;
        }

        ListNode *ans = ptr;

        while(l1 != NULL && l2 != NULL) {
            if(l1->val <= l2->val) {
                ptr->next = l1;
                ptr = l1;
                l1 = l1->next;
            } else {
                ptr->next = l2;
                ptr = l2;
                l2 = l2->next;
            }
        }

        if(l1 !=NULL) { ptr->next= l1; }
        if(l2 != NULL) { ptr->next= l2; }

        return ans;
    }
};