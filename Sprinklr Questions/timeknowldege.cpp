#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool cmp(vector<int> a, vector<int> b){
    return a[1]<b[1];
}

int maxknowledge(vector<vector<int>> timeslot){
    int n = timeslot.size();
    //sort(timeslot.begin(),timeslot.end(),cmp)
    int know[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==0)
                know[i][j] = timeslot[i][2];
            else if(i==0)
                know[i][j] = timeslot[j][2];
            else
                know[i][j] = 0;
            cout<<know[i][j]<< " ";
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){ //if start time is after the end time of other and vice versa
            if(timeslot[i][0]>timeslot[j][1] || timeslot[i][1]<timeslot[j][0])
                if(know[i][j]<know[i][0]+know[0][j])
                    know[i][j]=know[i][0]+know[0][j];
            cout<<know[i][j]<< " ";
        }
        cout<<endl;
    }
    int max=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(max<know[i][j])
                max = know[i][j];
    return max;

}

int main(){
    int n;
    cin>>n;
    vector<vector<int>> timeslot(n);
    for(int i=0;i<n;i++){
        timeslot[i] = vector<int>(3);
        cin>>timeslot[i][0]>>timeslot[i][1]>>timeslot[i][2];
    }
    int ans = maxknowledge(timeslot);
    cout<<ans;
    return 0;
}