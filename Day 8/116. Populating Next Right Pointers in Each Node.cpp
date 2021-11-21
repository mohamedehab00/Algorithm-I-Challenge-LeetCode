#include <bits/stdc++.h>
using namespace std;

void BFS(Node* root){
    queue<Node*> que;
    if(root == NULL){
        return;
    }
    que.push(root);
    vector<Node *> nodes;
    while (!que.empty()){
        Node * curr = que.front();
        que.pop();
        nodes.push_back(curr);
        if(curr->left != NULL){
            que.push(curr->left);
        }
        if(curr->right != NULL){
            que.push(curr->right);
        }
    }
    int level = 0;
    int nodes_no = pow(2,level);
    int start = 0;
    while (start < nodes.size()){
        if(nodes_no == 0){
            level ++;
            nodes_no = pow(2,level);
        }
        if(nodes_no-1 > 0){
            nodes[start]->next = nodes[start+1];
        } else{
            nodes[start]->next = NULL;
        }
        nodes_no--;
        start++;
    }
}

Node* connect(Node* root) {
    BFS(root);
    return root;
}
int main(){

}