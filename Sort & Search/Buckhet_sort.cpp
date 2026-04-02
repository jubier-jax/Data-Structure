#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    float a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    vector<float> bucket[n];

    for(int i=0;i<n;i++){
        int idx=n*a[i];
        bucket[idx].push_back(a[i]);
    }

    for(int i=0;i<n;i++)
        sort(bucket[i].begin(),bucket[i].end());

    int k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<bucket[i].size();j++){
            a[k++]=bucket[i][j];
        }
    }

    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
