#include <iostream>
#include <vector>
using namespace std;

void heapifyUpMin(vector<int>& h,int i)
{ 
  while(i>0)
  { 
    int p=(i-1)/2; 
    if(h[p]>h[i]) 
      swap(h[p],h[i]); 
    else break; i=p; 
  } 
}
void heapifyDownMin(vector<int>& h,int i,int n)
{ 
  while(i<n)
  { 
    int l=2*i+1,r=2*i+2,smallest=i; 
    if(l<n && h[l]<h[smallest]) smallest=l; 
    if(r<n && h[r]<h[smallest]) smallest=r; 
    if(smallest==i) break; 
    swap(h[i],h[smallest]); 
    i=smallest; 
  } 
}

int main(){ 
  vector<int> h={10,5,3,2,7}; 
  heapifyUpMin(h,h.size()-1); 
  heapifyDownMin(h,0,h.size()); 
  for(int x:h) cout<<x<<" "; 
  cout<<endl; 
}
