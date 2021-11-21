#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> combine(int n, int k) {
    vector<int> arr(n,0);
    int ones = k,start = n-1;
    while (ones > 0){
        arr[start--] = 1;
        ones--;
    }
    vector<vector<int>> ans;
    do {
        vector<int> sub_ans;
        for (int i = 0; i < arr.size(); ++i) {
            if(arr[i] == 1){
                sub_ans.push_back(i+1);
            }
        }
        ans.push_back(sub_ans);
    } while (next_permutation(arr.begin(),arr.end()));
    return ans;
}

int main(){

}