#include <iostream>
#include <vector>
using namespace std;

void dfs(int node,vector<vector<int>>& adj,vector<int>& vis){
    vis[node]=1;
    cout<<node<<" ";
    for(int x:adj[node]){
        if(!vis[x]) dfs(x,adj,vis);
    }
}

int main(){
    int n,m,u,v,start;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin>>start;
    vector<int> vis(n,0);
    dfs(start,adj,vis);
}
