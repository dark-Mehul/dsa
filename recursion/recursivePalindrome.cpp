#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int left , int right){
    if(left>right){
        return true;
    }

    if(s[left] != s[right]) return false;

    return checkPalindrome(s,left+1, right -1 );
}

int main(){
    string s;
    cin>>s;

    cout<<checkPalindrome(s,0,s.size()-1);
}