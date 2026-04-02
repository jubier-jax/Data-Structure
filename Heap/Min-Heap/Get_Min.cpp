#include <iostream>
#include <vector>
using namespace std;

int extractMin(vector<int>& h){
    if(h.empty()) return -1;
    int mn=h[0];
    h[0]=h.back();
    h.pop_back();
    int i=0,n=h.size();
    while(i<n){
        int l=2*i+1,r=2*i+2,smallest=i;
        if(l<n && h[l]<h[smallest]) smallest=l;
        if(r<n && h[r]<h[smallest]) smallest=r;
        if(smallest==i) break;
        swap(h[i],h[smallest]);
        i=smallest;
    }
    return mn;
}

int main(){ 
  vector<int> h; 
  int n,v; 
  cin>>n; 
  for(int i=0;i<n;i++)
  { 
    cin>>v; 
   h.push_back(v); 
  } 
  cout<<extractMin(h)<<endl; 
  for(int x:h) cout<<x<<" "; 
  cout<<endl; 
}
