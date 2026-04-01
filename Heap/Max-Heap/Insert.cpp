#include <iostream>
#include <vector>
using namespace std;

void heapifyUpMax(vector<int>& h,int i){
    while(i>0){
        int p=(i-1)/2;
        if(h[p]<h[i]) swap(h[p],h[i]);
        else break;
        i=p;
    }
}

void insertMax(vector<int>& h,int val){
    h.push_back(val);
    heapifyUpMax(h,h.size()-1);
}

int main(){
    vector<int> h;
    int n,v; cin>>n;
    for(int i=0;i<n;i++){ cin>>v; insertMax(h,v); }
    for(int x:h) cout<<x<<" "; cout<<endl;
}
