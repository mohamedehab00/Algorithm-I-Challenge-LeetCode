#include <bits/stdc++.h>
using namespace std;

TreeNode* DFS(TreeNode* root1, TreeNode* root2){
    if(root1 == nullptr && root2 == nullptr){
        return nullptr;
    }
    if(root1 == nullptr){
        return root2;
    }
    if(root2 == nullptr){
        return root1;
    }
    TreeNode* root = new TreeNode(root1->val + root2->val);
    root->left = DFS(root1->left,root2->left);
    root->right = DFS(root1->right,root2->right);
    return root;
}

TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
    return DFS(root1,root2);
}

int main(){

}