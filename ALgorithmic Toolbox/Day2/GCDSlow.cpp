#include<iostream>
using namespace std;
int gcd(int a, int b){
  int hcf = 1;
  for(int i =2;i<a+b;++i){
    if((a%i==0)&&(b%i)==0)
    hcf=i;
   }
  return hcf;
}
int main(){
  int a,b;
  cin>>a>>b;
  int c = gcd(a,b);
  cout<<c;
}
