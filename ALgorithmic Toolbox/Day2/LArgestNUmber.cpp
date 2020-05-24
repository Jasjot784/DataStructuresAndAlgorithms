#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
int largest(vector<int> &v){
  sort(v.begin(),v.end(),greater<int>());
  int number = 0;
  for(int i = 0;i<v.size();++i){
    number = v[i]+ 10*number;
  }
  return number;
}
int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;++i)
  cin>>v[i];
  int c = largest(v);
  cout<<c<<endl;
}
