#include <iostream>
#include <vector>
using namespace std;

void heapifyUpMax(vector<int>& h,int i)
{ 
  while(i>0)
  { 
    int p=(i-1)/2; 
    if(h[p]<h[i]) swap(h[p],h[i]); 
    else break; 
    i=p; 
  } 
}
void heapifyDownMax(vector<int>& h,int i,int n)
{ 
  while(i<n)
  { 
    int l=2*i+1,r=2*i+2,largest=i; 
    if(l<n && h[l]>h[largest]) largest=l; 
    if(r<n && h[r]>h[largest]) largest=r; 
    if(largest==i) break; 
    swap(h[i],h[largest]); i=largest; 
  } 
}

int main(){ 
  vector<int> h={10,5,3,2,7}; 
  heapifyUpMax(h,h.size()-1); 
  heapifyDownMax(h,0,h.size()); 
  for(int x:h) cout<<x<<" "; cout<<endl; 
}
