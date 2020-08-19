#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        int i,j=0,k;
        int dou = 2*(numRows-1);
        string ans = "";
        if(n == numRows || numRows == 1)
              ans += s;  
        else{
            for(i=0;i<numRows-1;i++){
                j = i;
                k = dou - 2*i ;
            
                while(j<n){
                    ans += s[j];
                    j += k;
                    if(k < dou)
                        k = dou-k;
                }
            }
            j = numRows-1;
            while(j<n){
                ans += s[j];
                j = j + dou;
            }
        }
        return ans;
    }
};