#include <bits/stdc++.h>
using namespace std;

ListNode* middleNode(ListNode* head) {
    int tot = 0;
    ListNode * curr = head;
    while (curr != nullptr){
        tot++;
        curr = curr->next;
    }
    int mid = tot / 2,start = 0;
    ListNode * curr1 = head;
    while (start < mid){
        curr1 = curr1->next;
        start++;
    }
    return curr1;
}

int main(){

}