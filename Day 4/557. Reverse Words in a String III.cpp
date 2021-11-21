#include <bits/stdc++.h>
using namespace std;

string reverseString(string s,int start,int end) {
    string word = "";
    for (int i = end; i >= start; --i) {
        word+=s[i];
    }
    return word;
}

string reverseWords(string s) {
    string New = "";
    int lst_start = 0;
    for (int i = 0; i < s.size(); ++i) {
        if(s[i] == ' '){
            New+= reverseString(s,lst_start,i-1)+" ";
            lst_start = i+1;
        }
    }
    New += reverseString(s,lst_start,s.size()-1);
    return New;
}

int main(){

}