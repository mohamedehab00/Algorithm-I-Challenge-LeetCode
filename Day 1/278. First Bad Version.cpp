#include <bits/stdc++.h>
using namespace std;

int firstBadVersion(int n) {
    int l = 1;
    int r = n;
    int first_bad=0;
    while (l <= r){
        int mid = l + ((r-l)/2);
        if(isBadVersion(mid)){
            first_bad = mid;
            while (isBadVersion(first_bad)){
                if(isBadVersion(first_bad-1)){
                    first_bad-=1;
                } else{
                    return first_bad;
                }
            }
        } else{
            l = mid+1;
        }
    }
    return first_bad;
}

int main(){

}