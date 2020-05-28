#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n],b[n];
  for(int i=0;i<n;++i)
  cin>>a[i];
  for(int i=0;i<n;++i)
  cin>>b[i];

  int m[2*n-1];

  for(int i = 0; i<2*n-1 ; ++i)
  m[i]=0;

  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      m[i+j]+=(a[i]*b[j]);
    }
  }
  for(int i = 0; i<2*n-1 ; ++i)
  cout<<m[i]<<" ";
}
