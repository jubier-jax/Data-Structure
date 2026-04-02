#include <iostream>
#include <vector>
using namespace std;

bool dfs(int node,int parent,vector<vector<int>>& adj,vector<int>& vis){
    vis[node]=1;
    for(int x:adj[node]){
        if(!vis[x]){
            if(dfs(x,node,adj,vis)) return true;
        }
        else if(x!=parent) return true;
    }
    return false;
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
    for(int i=0;i<n;i++){
        if(!vis[i] && dfs(i,-1,adj,vis)){
            cout<<"Cycle Found"; return 0;
        }
    }
    cout<<"No Cycle";
}
