#include <bits/stdc++.h>
using namespace std;

bool generate_and_match(map<char,int> &S1,map<char,int> &S2,int start,int end,string s2){
    for (int i = start; i <= end; ++i) {
        S2[s2[i]]++;
    }
    auto item1 = S1.begin();
    for (const auto &item : S2) {
        if(item1->first != item.first || item1->second != item.second){
            S2.clear();
            return false;
        }
        item1++;
    }
    S2.clear();
    return true;
}
bool checkInclusion(string s1, string s2) {
    map<char,int> S1,S2;
    for (int i = 0; i < s1.size(); ++i) {
        S1[s1[i]]++;
    }
    for (int i = 0; i+s1.size()-1 < s2.size(); ++i) {
        bool res = generate_and_match(S1,S2,i,i+s1.size()-1,s2);
        if(res){
            return true;
        }
    }
    return false;
}

int main(){

}