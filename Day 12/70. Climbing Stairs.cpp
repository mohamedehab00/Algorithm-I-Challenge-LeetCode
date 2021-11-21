#include <bits/stdc++.h>
using namespace std;

int climb(int n,vector<int> &memo){
    if(n == 0){
        return 1;
    }
    if(n < 0){
        return 0;
    }
    if(memo[n] != -1){
        return memo[n];
    }
    int choice1 = climb(n-1,memo);
    int choice2 = climb(n-2,memo);
    memo[n] = choice1+choice2;
    return memo[n];
}

int climbStairs(int n) {
    vector<int> memo(n+1,-1);
    return climb(n,memo);
}

int main(){

}