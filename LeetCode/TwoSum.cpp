#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        unordered_map<int,int> m1;
        int n = nums.size();
        int i;
        for(i=0;i<n;i++){
            if(m1.find(target-nums[i]) != m1.end()){
                ans[0] = m1[target-nums[i]];
                ans[1] = i;
                return ans;
            }
            m1[nums[i]] =i;
        }
        return ans;
    }
};