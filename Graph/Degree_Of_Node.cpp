#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,u,v,node;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cin>>node;
    cout<<adj[node].size()<<endl;
}
