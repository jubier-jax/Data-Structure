#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> tree(2*n);

    for(int i=0;i<n;i++)
        tree[n+i]=i;

    for(int i=n-1;i>0;i--){
        if(a[tree[2*i]]<a[tree[2*i+1]])
            tree[i]=tree[2*i];
        else
            tree[i]=tree[2*i+1];
    }

    vector<int> result;

    for(int i=0;i<n;i++){
        int idx=tree[1];
        result.push_back(a[idx]);
        a[idx]=1e9;

        int pos=n+idx;
        while(pos>1){
            pos/=2;
            if(a[tree[2*pos]]<a[tree[2*pos+1]])
                tree[pos]=tree[2*pos];
            else
                tree[pos]=tree[2*pos+1];
        }
    }

    for(int i=0;i<n;i++) cout<<result[i]<<" ";
}
