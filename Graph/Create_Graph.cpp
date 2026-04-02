#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,u,v;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        cout<<i<<": ";
        for(int x:adj[i]) cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}
