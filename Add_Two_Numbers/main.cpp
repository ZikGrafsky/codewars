//
// Created by grafsky on 9/13/22.
//
#include "addTwoNumbers.hpp"

int main(){
    Solution* test_case = new Solution();
    ListNode* tmp;
    ListNode* list= new ListNode(std::experimental::randint(0, 9), nullptr);
    ListNode* list1= new ListNode(std::experimental::randint(0, 9), nullptr);
    tmp = list;
    for (int i = 2; i <= 3; ++i) {
        tmp->next = new ListNode(std::experimental::randint(0, 9), nullptr);
        tmp = tmp->next;
    }
    tmp = list1;
    for (int i = 2; i <= 3; ++i) {
        tmp->next = new ListNode(std::experimental::randint(0, 9), nullptr);
        tmp = tmp->next;
    }
    tmp = test_case->addTwoNumbers(list, list1);
    while (tmp->next != NULL){
        cout << tmp->val;
        tmp = tmp->next;
    }
    cout << tmp->val;
}