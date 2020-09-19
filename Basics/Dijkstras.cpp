//Note : Only works for non negative edges

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define INF INT_MAX

queue<int> q;

void dks(){
    for (int i = 1; i <= n; i++) 
        distance[i] = INF;
    distance[x] = 0;
    q.push({0,x});
    while (!q.empty()) {
        int a = q.top().second; q.pop();
        if (processed[a]) continue;
            processed[a] = true;
        for (auto u : adj[a]) {
            int b = u.first, w = u.second;
            if (distance[a]+w < distance[b]) {
                distance[b] = distance[a]+w;
                q.push({-distance[b],b});
            }
        }
    }
}

int main(){
    
    //no of nodes
    int n;
    cin>>n;
    int m;
    //no of edges
    cin>>m;
    vector<int> distance(n);
    vector<tuple<int,int,int>> edges(m);
    for(int i=0;i<m;i++){ 
        int a,b,w;
        cin>>a>>b>>w;
        edges.push_back({a,b,w});
    }
    dks(0,n,edges,distance);
    for(auto i: distance)
        cout<<i<<" ";
    return 0;
}