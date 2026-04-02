#include <iostream>
#include <vector>
#include <queue>
using namespace std;

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
    queue<int> q;
    q.push(start);
    vis[start]=1;
    while(!q.empty()){
        int node=q.front(); q.pop();
        cout<<node<<" ";
        for(int x:adj[node]){
            if(!vis[x]){
                vis[x]=1;
                q.push(x);
            }
        }
    }
}
