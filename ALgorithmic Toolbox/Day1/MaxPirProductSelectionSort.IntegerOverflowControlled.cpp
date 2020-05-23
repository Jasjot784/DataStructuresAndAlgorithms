#include<iostream>
#include<vector>
using namespace std;
long long int MaxPairwiseProduct(const vector<int> &v){
  long long int result = 0;
  for(long long int i = 0;i<v.size();++i){
    for(long long int j = i+1;j<v.size();++j){
      if(v[i]*v[j]>result)
      result = v[i]*v[j];
    }
  }return result;
}

int main(){
  long long int n;
  cin>>n;
  vector<int> v(n);
  for(long long int i=0;i<n;++i)
  cin>>v[i];

  long long int c = MaxPairwiseProduct(v);
  cout<<c<<endl;
}
