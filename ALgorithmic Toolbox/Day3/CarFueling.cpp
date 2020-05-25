#include<iostream>
using namespace std;
int MinRefills(int L,int x[],int n){
  int count = 0;
  for(int i=1;i<n;++i){
    if(x[i]-x[i-1]>L)
    return -1;
    if(x[i]-x[i-1]<=L){
      if(i!=n-1)
      count++;
      int j = i;
      while(x[j+1]-x[i-1]<=L){
        j++;
      }
      i=j;
    }

  }return count;
}
int main(){
  int n,L;
  cin>>n>>L;
  int x[n+2];
  x[0] = 0;
  for(int i =1;i<n+2;++i){
    cin>>x[i];
  }
  int c = MinRefills(L,x,n+2);
  cout<<c;

}
