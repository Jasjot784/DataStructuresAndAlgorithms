#include<iostream>
#include<functional>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i =0;i<n;++i)
  cin>>v[i];

  sort(v.begin(),v.end(),greater<int>());

  cout<<v[0]*v[1];
}
