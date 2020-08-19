#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int i,j;
        vector<int> lastchar(256,-1);
        int ans = 0;
        i=0;
        for(j=0;j<n;j++){
            i = max(i,lastchar[s[j]] + 1);
            ans = max(ans,j-i+1);
            lastchar[s[j]] = j;
        }
        return ans;
    }
};