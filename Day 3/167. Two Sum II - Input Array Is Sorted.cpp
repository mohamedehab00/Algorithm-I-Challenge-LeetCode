#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) {
    vector<int> ans(2);
    int li = 0,ri = numbers.size()-1;
    while (li<ri){
        if(numbers[li]+numbers[ri] == target){
            ans[0]=li+1;
            ans[1]=ri+1;
            break;
        }

        if(numbers[li]+numbers[ri] > target){
            ri--;
        }
        if(numbers[li]+numbers[ri] < target){
            li++;
        }
    }

    return ans;
}

int main(){

}