#include <iostream>
#include <vector>
using namespace std;

void heapifyDownMax(vector<int>& h,int i){
    int n=h.size();
    while(i<n){
        int l=2*i+1,r=2*i+2,largest=i;
        if(l<n && h[l]>h[largest]) largest=l;
        if(r<n && h[r]>h[largest]) largest=r;
        if(largest==i) break;
        swap(h[i],h[largest]);
        i=largest;
    }
}

void deleteRootMax(vector<int>& h){
    int n=h.size();
    if(n==0) return;
    h[0]=h[n-1];
    h.pop_back();
    heapifyDownMax(h,0);
}

int main(){
    vector<int> h;
    int n,v; cin>>n;
    for(int i=0;i<n;i++){ cin>>v; h.push_back(v); }
    deleteRootMax(h);
    for(int x:h) cout<<x<<" "; cout<<endl;
}
