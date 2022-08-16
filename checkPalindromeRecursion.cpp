#include<bits/stdc++.h>

using namespace std;
bool checkPalindrome(string &str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    i++;
    j--;
    bool ans= checkPalindrome(str, i,j );
    return ans;

    
}
int main(){
    string str="reviver";
    int i=0;
    int j=str.length()-1;
    cout<<checkPalindrome(str, i, j);
}