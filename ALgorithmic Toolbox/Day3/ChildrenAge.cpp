//sort children in age differnce max 3
#include<iostream>
#include<algorithm>
using namespace std;
int organize(int x[],int n){
  int g=1;
  for(int i=0;i<n;++i){
    if((x[i+1]-x[i])>3)
    g++;
    else
    continue;
  }
  return g;
}
int main(){
  int n;
  cin>>n;
  int x[n];
  for(int i=0;i<n;++i)
  cin>>x[i];
  sort(x,x+n);
  int c = organize(x,n);
  cout<<c<<endl;
}
