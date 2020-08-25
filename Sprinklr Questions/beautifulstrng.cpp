#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int repeat(string s,char str){
    unordered_map<char,int> charmap;
    int i=0;
    char t;
    for(i=0;i<26;i++){
        t = i+'a';
        charmap[t] = 0;
    }
    for(i=0;i<s.size();i++)
        charmap[s[i]]++;
    if(charmap[str] == 1)
        return 1;
    return 0;
}

int beautifulstr(string s){ 
    int n = s.size();
    int ans = 0;
    string sub;
    vector <string> substrs;
    unordered_map<string,int> charmap;
    int i,j;
    for(i=0;i<n;i++){
        sub = "" + s[i];
        substrs.push_back(sub);
        ans++;
        for(j=i+1;j<n;j++){
            if(s[i] == s[j])
                break;
            if(repeat(sub,s[j]))
                break;
            sub += s[j];
            substrs.push_back(sub);
            ans++;
        }
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    int ans = beautifulstr(s);
    cout<<ans;
    return 0;
}