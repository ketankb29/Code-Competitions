#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x<10)
            return true;
        int i,j;
        long long rev=0;
        i=x;
        while(i>0){
            j = i%10;
            i /= 10;
            rev = rev*10 + j;
        }
        if(x == rev)
            return true;
        return false;
    }
};