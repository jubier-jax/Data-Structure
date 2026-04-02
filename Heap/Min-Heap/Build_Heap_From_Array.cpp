#include <iostream>
#include <vector>
using namespace std;

void heapifyDownMin(vector<int>& h,int i,int n){
    while(i<n){
        int l=2*i+1,r=2*i+2,smallest=i;
        if(l<n && h[l]<h[smallest]) smallest=l;
        if(r<n && h[r]<h[smallest]) smallest=r;
        if(smallest==i) break;
        swap(h[i],h[smallest]);
        i=smallest;
    }
}

void buildHeapMin(vector<int>& h)
{ 
  int n=h.size(); 
  for(int i=n/2-1;i>=0;i--) heapifyDownMin(h,i,n); 
}

int main(){ 
  int n,v; 
  cin>>n; 
  vector<int> h(n); 
  for(int i=0;i<n;i++) 
    cin>>h[i]; 
  buildHeapMin(h); 
  for(int x:h) cout<<x<<" "; 
  cout<<endl; 
}
