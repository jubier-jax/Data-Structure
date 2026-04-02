#include <iostream>
#include <vector>
using namespace std;

void dfs(int node,vector<vector<int>>& adj,vector<int>& vis){
    vis[node]=1;
    for(int x:adj[node]){
        if(!vis[x]) dfs(x,adj,vis);
    }
}

int main(){
    int n,m,u,v;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> vis(n,0);
    dfs(0,adj,vis);
    for(int i=0;i<n;i++){
        if(!vis[i]){ cout<<"Not Connected"; return 0; }
    }
    cout<<"Connected";
}
