#include <bits/stdc++.h>
using namespace std;

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    if(l1 == nullptr && l2 == nullptr){
        return nullptr;
    }
    ListNode* curr1 = l1;
    ListNode* curr2 = l2;
    vector<ListNode*> op;
    while (curr1 != nullptr && curr2 != nullptr){
        if(curr1->val <= curr2->val){
            ListNode* newNode = new ListNode(curr1->val);
            op.push_back(newNode);
            curr1 = curr1->next;
        }
        else{
            ListNode* newNode = new ListNode(curr2->val);
            op.push_back(newNode);
            curr2 = curr2->next;
        }
    }
    while (curr1 != nullptr){
        ListNode* newNode = new ListNode(curr1->val);
        op.push_back(newNode);
        curr1 = curr1->next;
    }
    while (curr2 != nullptr){
        ListNode* newNode = new ListNode(curr2->val);
        op.push_back(newNode);
        curr2 = curr2->next;
    }
    delete(l1);
    delete(l2);

    for (int i = 0; i < op.size()-1; ++i) {
        op[i]->next = op[i+1];
    }
    return op[0];
}

int main(){

}