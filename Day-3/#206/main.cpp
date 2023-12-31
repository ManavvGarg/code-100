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

//Iterative

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode * prev = NULL;
        ListNode * forward = NULL;
        while(head != NULL) {
            forward = head->next;
            head->next = prev;
            prev = head;
            head = forward;
        }

        free(forward);
        return prev;
    }
};


//Recursive
class Solution2 {
public:
    ListNode* reverseList2(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode * newHead = reverseList2(head->next);
        head->next->next = head;
        head->next = NULL;

        return newHead;
    }
};