//Lexicographically n-th permutation of a string

#include <iostream>
#include <bits/stdc++.h>
#include<string>

using namespace std;

string perm(string s,int p){
    sort(s.begin(), s.end()); 
    long int i = 1; 
    do { 
        if (i == p) 
            break; 
        i++; 
    } while (next_permutation(s.begin(), s.end())); 
    return s;
}

int main(){
    string s;
    int n;
    cin>>s;
    cin>>n;
    string ans = perm(s,n);
    cout<<ans;
    return 0;
}