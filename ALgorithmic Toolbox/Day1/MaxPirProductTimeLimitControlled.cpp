#include<iostream>
#include<vector>
using namespace std;
long long int MaxPairwiseProduct(const vector<int> &v){
  long long int result = 0,result2 = 0;
  long long int max_index1,max_index2;
  for(long long int i = 0;i<v.size();++i){
    if(v[i]>result){
        max_index1 = i;
        result = v[i];
    }
  }
  for(long long int j = 0;j<v.size();++j){
    if(v[j]>result2 && j!=max_index1 && v[j]<=result){
        max_index2 = i;
        result2 =
    }}return (v[max_index1]*v[max_index2]);
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
