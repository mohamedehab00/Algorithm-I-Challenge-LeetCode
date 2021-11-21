#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    int res = n;
    if(res <= 0){
        return false;
    }
    while (res > 1){
        if(res % 2 == 0){
            res = res / 2;
        } else{
            return false;
        }
    }
    return true;
}

int main(){

}