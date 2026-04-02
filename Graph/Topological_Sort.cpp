#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node,vector<vector<int>>& adj,vector<int>& vis,stack<int>& st){
    vis[node]=1;
    for(int x:adj[node]){
        if(!vis[x]) dfs(x,adj,vis,st);
    }
    st.push(node);
}

int main(){
    int n,m,u,v;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
    }
    vector<int> vis(n,0);
    stack<int> st;
    for(int i=0;i<n;i++){
        if(!vis[i]) dfs(i,adj,vis,st);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
