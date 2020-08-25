//count the number of digits and letters


#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int countl(string s){
    int count =0 ;
    for(int i=0;i<s.size();i++)
        if(s[i]>=='A' && s[i]<='Z')
            count++;
        else if(s[i]>=='A' && s[i]<='Z')
            count++;
    return count;
}

int countd(string s){
    int count =0 ;
    for(int i=0;i<s.size();i++)
        if(s[i]>=='0' && s[i]<='9')
            count++;
    return count;
}

int main(){
    string s;
    cin>>s;
    cout<<countl(s)<<" "<<countd(s);
}