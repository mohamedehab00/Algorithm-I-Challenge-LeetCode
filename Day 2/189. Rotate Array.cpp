#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    vector<int> ans(nums.size());
    int idx = (k % nums.size());
    idx = nums.size()-idx;
    for (int i = 0; i < ans.size(); ++i) {
        ans[i] = nums[idx % nums.size()];
        idx++;
    }
    for (int i = 0; i < nums.size(); ++i) {
        nums[i] = ans[i];
    }
}

int main(){

}