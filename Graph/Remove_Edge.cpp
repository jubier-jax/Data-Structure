#include <iostream>
#include <vector>
using namespace std;

void removeEdge(vector<vector<int>>& adj,int u,int v){
    for(auto it=adj[u].begin(); it!=adj[u].end(); it++){
        if(*it==v){ adj[u].erase(it); break; }
    }
    for(auto it=adj[v].begin(); it!=adj[v].end(); it++){
        if(*it==u){ adj[v].erase(it); break; }
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
    cin>>u>>v;
    removeEdge(adj,u,v);
    for(int i=0;i<n;i++){
        for(int x:adj[i]) cout<<x<<" ";
        cout<<endl;
    }
}
