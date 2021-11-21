#include <bits/stdc++.h>
using namespace std;

int hammingWeight(uint32_t n) {
    unsigned int res = n;
    if(res <= 0){
        return 0;
    }
    int count = 0;
    while (res > 0){
        if(res % 2 != 0){
            count++;
        }
        res = res / 2;
    }
    return count;
}

int main(){

}