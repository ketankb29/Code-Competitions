//count the number of proper words for given number of letters;

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

long long count(long long N){
    if(N==2)
        return 210;
    long long ans = (pow(26,N) - pow(21,N) - pow(5,N))%1000000007;
    return ans;
}

int main(){
    long long N;
    cin>>N;
    cout<<count(N);
    return 0;
}