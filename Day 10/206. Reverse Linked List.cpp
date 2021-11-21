#include <bits/stdc++.h>
using namespace std;

ListNode* reverseList(ListNode* head) {
    if(head == nullptr){
        return head;
    }
    stack<ListNode*> st;
    ListNode* curr = head;
    while (curr != nullptr){
        ListNode* newNode = new ListNode(curr->val);
        st.push(newNode);
        curr = curr->next;
    }
    curr = st.top();
    ListNode* new_head = st.top();
    st.pop();
    while (!st.empty()){
        new_head->next = st.top();
        st.pop();
        new_head = new_head->next;
    }
    delete(head);
    return curr;
}

int main(){

}