#include<iostream>
using namespace std;
int Fibonacci(int k){
  if(k<=1 && k>=0)
  return k;
  else{
    return (Fibonacci(k-1)+Fibonacci(k-2));
  }


}
int main(){
  int k,result;
  cin>>k;
  result = Fibonacci(k);
  cout<<result<<endl;
}
