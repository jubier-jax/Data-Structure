#include <iostream>
#include <vector>
using namespace std;

int getMin(vector<int>& h){ return h.empty()?-1:h[0]; }
int getSize(vector<int>& h){ return h.size(); }
bool isEmpty(vector<int>& h){ return h.empty(); }

int main(){ 
  vector<int> h; 
  int n,v; 
  cin>>n; 
for(int i=0;i<n;i++)
  { 
    cin>>v; 
    h.push_back(v); 
  } 
cout<<getMin(h)<<endl; 
cout<<getSize(h)<<endl; 
  cout<<(isEmpty(h)?"Yes":"No")<<endl;
}
