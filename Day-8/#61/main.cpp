#include <stdio.h>
#include <iostream>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == nullptr || head == NULL || head->next == NULL) return head;

        ListNode * newHead = nullptr;
        ListNode * tail = head;
        
        int size = 1;
        while(tail->next) {
            tail = tail->next; 
            size++;
        }

        tail->next = head;

        k = k % size;

        int pos = size-k;
        for(int i = 0; i < pos; i++) {
            tail=tail->next;
        }

        newHead = tail->next;
        tail->next = NULL;

        return newHead;
    }
};