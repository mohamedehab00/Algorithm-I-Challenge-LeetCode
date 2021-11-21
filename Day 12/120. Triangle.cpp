#include <bits/stdc++.h>
using namespace std;

int min_path(vector<vector<int>>& triangle,int level,int i,vector<vector<int>> &memo){
    if(level > triangle.size()-1){
        return 0;
    }
    if(memo[level][i] != -1){
        return memo[level][i];
    }

    int choice1 = triangle[level][i] + min_path(triangle,level+1,i,memo);
    int choice2 = triangle[level][i] + min_path(triangle,level+1,i+1,memo);

    memo[level][i] = min(choice1,choice2);

    return memo[level][i];
}

int minimumTotal(vector<vector<int>>& triangle) {
    vector<vector<int>>memo;
    for (int i = 0; i < triangle.size(); ++i) {
        vector<int> temp(triangle[i].size(),-1);
        memo.push_back(temp);
    }
    return min_path(triangle,0,0,memo);
}

int main(){

}