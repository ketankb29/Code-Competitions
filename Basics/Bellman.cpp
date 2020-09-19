#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define INF INT_MAX

void bf(int x, int n, vector<tuple<int,int,int>> edges, vector<int> &distance){
    for (int i = 1; i <= n; i++) distance[i] = INF;
    distance[x] = 0;
    for (int i = 1; i <= n-1; i++) {
        for (auto e : edges) {
            int a, b, w;
            tie(a, b, w) = e;
            distance[b] = min(distance[b], distance[a]+w);
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
    bf(0,n,edges,distance);
    for(auto i: distance)
        cout<<i<<" ";
    return 0;
}