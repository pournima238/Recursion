#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void solve(vector<int>output,vector<vector<int>>&ans,vector<int>& nums,int i){
        if(i>=nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        solve(output,ans,nums,i+1);
        //include
        int ele=nums[i];
        output.push_back(ele);
        solve(output,ans,nums,i+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
      vector<vector<int>>ans;
        vector<int>output;
        solve(output,ans,nums,0);
        return ans;
    }
};