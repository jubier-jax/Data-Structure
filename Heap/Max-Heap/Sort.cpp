#include <iostream>
#include <vector>
using namespace std;

void heapifyDownMax(vector<int>& h,int i,int n)
{ 
  while(i<n)
  { 
    int l=2*i+1,r=2*i+2,largest=i; 
    if(l<n && h[l]>h[largest]) largest=l; 
    if(r<n && h[r]>h[largest]) largest=r; 
    if(largest==i) break; swap(h[i],h[largest]); i=largest; 
  } 
}

void buildHeapMax(vector<int>& h)
{ 
  int n=h.size(); 
  for(int i=n/2-1;i>=0;i--) heapifyDownMax(h,i,n); 
}

void heapSort(vector<int>& h){ 
  int n=h.size(); 
  buildHeapMax(h); 
  for(int i=n-1;i>0;i--)
  { swap(h[0],h[i]); 
   heapifyDownMax(h,0,i); 
  } 
}

int main(){ 
  int n,v; 
  cin>>n; 
  vector<int> h(n); 
  for(int i=0;i<n;i++) 
    cin>>h[i]; 
  heapSort(h); 
  for(int x:h) cout<<x<<" "; 
  cout<<endl; 
}
