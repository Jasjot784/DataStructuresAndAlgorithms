#include<iostream>
using namespace std;
int main(){
  int w;
  cin>>w;
  int value[w+1];
  value[0] = 0;
  int weights[] = {0,1,5,10};
  int v[] = {0,2,13,32};

  for(int i =1 ;i<=w;++i){
    value[i] = 0;
    for(int j = 1;j<=3;++j){
      if(weights[j]<=i){
        int val = value[i-weights[j]] + v[j];
        if(val>value[i])
        value[i] = val;
      }
    }
  }
cout<<value[w];
}
