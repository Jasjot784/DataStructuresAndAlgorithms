#include<iostream>
using namespace std;
int gcd(int a, int b){
  int hcf = 1;
  if(a>b){
    if((a%b)==0)
    return b;
    else
    gcd(a%b,b);
  }else{
    if((b%a)==0)
    return a;
    else
    gcd(b%a,a);
  }
  return hcf;
}
int main(){
  int a,b;
  cin>>a>>b;
  int c = gcd(a,b);
  cout<<c;
}
