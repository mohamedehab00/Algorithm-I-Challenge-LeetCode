#include <bits/stdc++.h>
using namespace std;

ListNode* removeNthFromEnd(ListNode* head, int n) {
    int tot = 0;
    ListNode * curr = head;
    while (curr != nullptr){
        tot++;
        curr = curr->next;
    }
    if(tot == 1 && n == 1){
        ListNode* curr = head;
        delete(curr);
        head = nullptr;
        return head;
    }
    if(tot - n == 0){
        ListNode* curr = head;
        head = head->next;
        delete(curr);
        return head;
    }
    int start = 1;
    ListNode* curr1 = head;
    while (start < tot - n){
        curr1=curr1->next;
        start++;
    }
    ListNode* rem = curr1->next;
    curr1->next = rem->next;
    delete(rem);
    return head;
}

int main(){
    
}