#include <iostream>
#include <vector>
using namespace std;

void heapifyDownMin(vector<int>& h,int i){
    int n=h.size();
    while(i<n){
        int l=2*i+1,r=2*i+2,smallest=i;
        if(l<n && h[l]<h[smallest]) smallest=l;
        if(r<n && h[r]<h[smallest]) smallest=r;
        if(smallest==i) break;
        swap(h[i],h[smallest]);
        i=smallest;
    }
}

void deleteRootMin(vector<int>& h){ 
  int n=h.size(); 
  if(n==0) return; 
  h[0]=h[n-1]; 
  h.pop_back(); 
  heapifyDownMin(h,0); 
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
  deleteRootMin(h); 
  for(int x:h) cout<<x<<" "; 
  cout<<endl; 
}
