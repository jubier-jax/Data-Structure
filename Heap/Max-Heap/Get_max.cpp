#include <iostream>
#include <vector>
using namespace std;

int extractMax(vector<int>& h){
    if(h.empty()) return -1;
    int mx=h[0];
    h[0]=h.back();
    h.pop_back();
    int i=0,n=h.size();
    while(i<n){
        int l=2*i+1,r=2*i+2,largest=i;
        if(l<n && h[l]>h[largest]) largest=l;
        if(r<n && h[r]>h[largest]) largest=r;
        if(largest==i) break;
        swap(h[i],h[largest]);
        i=largest;
    }
    return mx;
}

int main(){
    vector<int> h;
    int n,v; cin>>n;
    for(int i=0;i<n;i++){ cin>>v; h.push_back(v); }
    cout<<extractMax(h)<<endl;
    for(int x:h) cout<<x<<" "; cout<<endl;
}
