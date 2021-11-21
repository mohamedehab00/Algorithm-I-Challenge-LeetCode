#include <bits/stdc++.h>
using namespace std;

int rob_houses(vector<int>& nums,int n,vector<int> &memo){
    if(n < 0){
        return 0;
    }
    if(memo[n] != -1){
        return memo[n];
    }
    if(n-2 < 0){
        return nums[n];
    }
    else if(n-3 < 0){
        memo[n] = nums[n] + rob_houses(nums,n-2,memo);
        return memo[n];
    }
    int choice1 = nums[n] + rob_houses(nums,n-2,memo);
    int choice2 = nums[n] + rob_houses(nums,n-3,memo);

    memo[n] = max(choice1,choice2);

    return memo[n];
}

int rob(vector<int>& nums) {
    int Max = INT_MIN;
    vector<int> memo(nums.size(),-1);
    for (int i = nums.size()-1; i >= 0; --i) {
        Max = max(Max, rob_houses(nums,i,memo));
    }
    return Max;
}

int main(){

}