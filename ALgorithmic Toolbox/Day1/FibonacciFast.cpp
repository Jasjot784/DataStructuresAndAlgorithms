#include<iostream>
using namespace std;
int Fibonacci(int k){
  int first = 0;
  int second = 1;
  int kth;
  if(k<=1 && k>=0)
  return k;
  else{
    for(int i =2;i<=k;i++){
      kth = first+second;
      first = second;
      second = kth;
    }
    return kth;
  }


}
int main(){
  int k,result;
  cin>>k;
  result = Fibonacci(k);
  cout<<result<<endl;
}
