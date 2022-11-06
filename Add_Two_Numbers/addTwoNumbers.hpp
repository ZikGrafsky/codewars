//
// Created by grafsky on 11/6/22.
//

#include <iostream>
#include <experimental/random>//for test case
using namespace std;


//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ret, *retptr;
        ret = new ListNode(0);
        retptr = ret;
        while (true){
            retptr->next = new ListNode(0);
            if ((l1->val + l2->val + retptr->val) > 9){
                retptr->val = (l1->val + l2->val + retptr->val) % 10;
                retptr->next->val = 1;
            } else
                retptr->val = (l1->val + l2->val + retptr->val);
            if (l2->next == nullptr && l1->next == nullptr) {
                if (retptr->next->val == 0)
                    retptr->next = nullptr;
                break;
            }
            retptr = retptr->next;
            l1->next == nullptr ? l1 = new ListNode(0) : l1 = l1->next;
            l2->next == nullptr ? l2 = new ListNode(0) : l2 = l2->next;
        }
        return ret;
    }
};