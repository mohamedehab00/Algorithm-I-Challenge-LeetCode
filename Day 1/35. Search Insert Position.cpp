#include <bits/stdc++.h>
using namespace std;

int binary_search(int l, int r, vector<int> arr, int target){
    if(l<=r){
        int mid = l + ((r-l)/2);

        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] >= target){
            return binary_search(l,mid-1,arr,target);
        }
        if(arr[mid] < target){
            return binary_search(mid+1,r,arr,target);
        }
    }
    return -1;
}

int searchInsert(vector<int>& nums, int target) {
    int idx = binary_search(0,nums.size()-1,nums,target);
    if(idx == -1){
        return upper_bound(nums.begin(),nums.end(),target)-nums.begin();
    }
    return idx;
}

int main(){

}