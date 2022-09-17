//
// Created by grafsky on 9/13/22.
//
#include <iostream>
#include <experimental/random>
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
        ListNode *ret, *l1ptr, *l2ptr, *retptr;
        ret = new ListNode(0);
        retptr = ret;
        l1ptr = l1;
        l2ptr = l2;
        while (true){
            cout << l1ptr->val << " | " << l2ptr->val << endl;
            retptr->next = new ListNode(0);
            if ((l1ptr->val + l2ptr->val + retptr->val) > 9){
                retptr->next->val = l1ptr->val + l2ptr->val + retptr->val - 9;
                retptr->val = 9;
            } else
                retptr->val = (l1ptr->val + l2ptr->val + retptr->val);
            retptr = retptr->next;

            if (l2ptr->next == nullptr && l1ptr->next == nullptr) break;

            l1ptr->next == nullptr ? l1ptr = new ListNode(0) : l1ptr = l1ptr->next;
            l2ptr->next == nullptr ? l2ptr = new ListNode(0) : l2ptr = l2ptr->next;
        }
        return ret;
    }
};

int main(){
    Solution* kek = new Solution();
    ListNode* tmp;
    ListNode* list= new ListNode(1, nullptr);
    ListNode* list1= new ListNode(1, nullptr);
    tmp = list;
    for (int i = 2; i <= 15; ++i) {
        tmp->next = new ListNode(std::experimental::randint(0, 9), nullptr);
        tmp = tmp->next;
    }
    tmp = list1;
    for (int i = 2; i <= 10; ++i) {
        tmp->next = new ListNode(std::experimental::randint(0, 9), nullptr);
        tmp = tmp->next;
    }
//    tmp = list;
//    while (tmp->next != NULL){
//        cout << tmp->val << endl;
//        tmp = tmp->next;
//    }
//    cout << "_________________\n";
    tmp = kek->addTwoNumbers(list, list1);
    while (tmp->next != NULL){
        cout << tmp->val;
        tmp = tmp->next;
    }
}