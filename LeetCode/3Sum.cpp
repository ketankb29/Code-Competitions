#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int i,j,k;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> res;
        for(i=0;i<n;i++){
            j = i+1; 
            k = n-1;
            if (i > 0 && nums[i] == nums[i - 1]) 
                continue;
            while(j<k){
                if(k<n-1 && nums[k] == nums[k+1]){
                    k--;
                    continue;
                }
                if (nums[i] + nums[j] + nums[k] > 0) 
                    k--;
                else if (nums[i] + nums[j] + nums[k] < 0) 
                    j++;
                else{
                     vector<int> temp;
                     temp.push_back(nums[i]);
                     temp.push_back(nums[j]);
                     temp.push_back(nums[k]);
                     res.push_back(temp);
                    j++;
                    k--;
                 }
            }
        }
        return res;
    }
};