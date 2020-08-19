#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long reverses(int x)
    {   long digit=1;long xtemp=x;
        while(xtemp>0)
        {
            digit*=10;
            xtemp/=10;
        }
        while(x>0)
        {
            digit/=10;
            xtemp+=(x%10)*digit;
            x/=10;
        }
        
        return xtemp;
    }
    int reverse(int x) {
        bool flag=(x<0?false:true);
        long xr=reverses(abs(x));
        xr=(flag?xr:-xr);
        return ( xr>INT_MAX || xr<INT_MIN )?0:(int)xr;
    }
};