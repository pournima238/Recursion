#include<bits/stdc++.h>
using namespace std;
class Solution {
    private:
    void solve(vector<string>&ans,string output,string mapping[],int i,string &digits){
        if(i>=digits.length()){
            ans.push_back(output);
            return;
        }
        int value=digits[i]-'0';
        string str=mapping[value];
        for(int j=0;j<str.length();j++){
            output.push_back(str[j]);
            solve(ans,output,mapping,i+1,digits);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
     vector<string>ans;
    if(digits.length()==0){
        return ans;
    }
     string output="";
     string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     int index=0;
     solve(ans,output,mapping,index,digits);
     return ans;
    }
};