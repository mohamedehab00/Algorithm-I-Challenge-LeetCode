#include <bits/stdc++.h>
using namespace std;

void help(set<string> &ans,string x,int idx){
    if(idx >= x.size()){
        return;
    }
    string x1 = x;
    string x2 = x;
    if(isalpha(x[idx])){
        x1[idx] = tolower(x1[idx]);
        x2[idx] = toupper(x2[idx]);
        ans.insert(x1);
        ans.insert(x2);
        help(ans,x1,idx+1);
        help(ans,x2,idx+1);
    } else{
        ans.insert(x);
        help(ans,x,idx+1);
    }
}

vector<string> letterCasePermutation(string s) {
    set<string> sub_ans;
    vector<string> ans;
    if(s.length() == 0){
        return ans;
    }
    help(sub_ans,s,0);
    for (const auto &item : sub_ans) {
        ans.push_back(item);
    }
    return ans;
}

int main(){
    letterCasePermutation("po");
}