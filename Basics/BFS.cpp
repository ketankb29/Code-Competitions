#include <iostream>
#include <bits/stdc++.h>

using namespace std;

queue<int> q;

void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 

void bfs(int x,vector<bool> &visited, vector<int> adj[], vector<int> &distance){
    visited[x] = true;
    distance[x] = 0;
    q.push(x);
    while (!q.empty()) {
        int s = q.front(); 
        q.pop();
        cout<<s<<" ";
        // process node s
        for (auto u : adj[s]) {
            if (visited[u]) 
                continue;
            visited[u] = true;
            distance[u] = distance[s]+1;
            q.push(u);
        }
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
    //Distance
    vector<int> dist(n,0);
    int m;
    cin>>m; //No. of edges
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        addEdge(adj,x,y);
    }
    bfs(0, visited, adj, dist);
    
    return 0;
}