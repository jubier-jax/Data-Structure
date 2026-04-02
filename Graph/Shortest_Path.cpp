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
    vector<int> dist(n,-1);
    queue<int> q;
    q.push(start);
    dist[start]=0;
    while(!q.empty()){
        int node=q.front(); q.pop();
        for(int x:adj[node]){
            if(dist[x]==-1){
                dist[x]=dist[node]+1;
                q.push(x);
            }
        }
    }
    for(int i=0;i<n;i++) cout<<dist[i]<<" ";
}
