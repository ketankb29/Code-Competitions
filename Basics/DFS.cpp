#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 

void dfs(int s, vector<bool> &visited, vector<int> adj[]) {
    if (visited[s]) 
        return;    
    cout<<s<<" ";
    visited[s] = true;
    // process node s
    for (auto u: adj[s]) {
        dfs(u,visited,adj);
    }
}

int main(){
    //No. of nodes
    int n;
    cin>>n;
    //Adjacency matrix
    vector<int> adj[n];
    //Visit matrix
    vector<bool> visited(n,false);
    int m;
    cin>>m; //No. of edges
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        addEdge(adj,x,y);
    }
    dfs(0, visited, adj);
    
    return 0;
}