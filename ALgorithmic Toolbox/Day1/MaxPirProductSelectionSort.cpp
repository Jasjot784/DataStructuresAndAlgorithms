#include<iostream>
#include<vector>
using namespace std;
int MaxPairwiseProduct(const vector<int> &v){
  int result = 0;
  for(int i = 0;i<v.size();++i){
    for(int j = i+1;j<v.size();++j){
      if(v[i]*v[j]>result)
      result = v[i]*v[j];
    }
  }return result;
}

int main(){
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;++i)
  cin>>v[i];

  int c = MaxPairwiseProduct(v);
  cout<<c<<endl;
}
