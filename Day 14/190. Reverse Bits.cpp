#include <bits/stdc++.h>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    unsigned int res = n;
    if(res <= 0){
        return 0;
    }
    vector<int> ans(32,0);
    int start = ans.size()-1;
    while (res > 0){
        if(res % 2 != 0){
            ans[start] = 1;
        }
        start--;
        res = res / 2;
    }
    reverse(ans.begin(),ans.end());
    res = 0;
    start = 0;
    for (int i = ans.size()-1; i >= 0; --i) {
        res += pow(2,start) * ans[i];
        start++;
    }
    return res;
}

int main(){

}