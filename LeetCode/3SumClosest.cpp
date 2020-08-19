#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min = INT_MAX;
        sort(nums.begin(),nums.end());
        int i,j,k,diff,sum;
        int n = nums.size();
        int res;
        for(i=0;i<n;i++){
            j = i+1;
            k = n-1;
            while(j<k){
                sum = nums[i]+nums[j]+nums[k];
                diff = abs(target-sum);
                if(diff == 0)
                    return sum;
                if(diff<min){
                    min = diff;
                    res = sum;
                }
                if(sum<=target)
                    j++;
                else 
                    k--;
            }
        }
        return res;
    }
};