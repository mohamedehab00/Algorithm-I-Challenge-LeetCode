#include <bits/stdc++.h>
using namespace std;

int binary_Search(int l, int r,vector<int> arr,int target){
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid]==target){
            return mid;
        }
        if (arr[mid] > target){
            return binary_Search(l, mid - 1,arr,target);
        }
        else{
            return binary_Search(mid + 1, r,arr,target);
        }
    }
    return -1;
}
int search(vector<int>& nums, int target) {
    return binary_Search(0,nums.size()-1,nums,target);
}

int main(){

}