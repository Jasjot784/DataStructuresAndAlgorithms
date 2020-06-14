#include<iostream>
using namespace std;
int main(){
  int change = 0;
  int money;
  cin>>money;
//supposing coins of 1,5,10 denominations
    if((money%10)==0){
      change = money/10;
    }else{
      if((money%5)==0){
        if(money<10)
        change =  1;
        else
        change = (money/10)+1;
      }else{
        if(((money/5)%2)==0)
        change = (money/10)+(money%5);
        else
        change = 1+(money/10)+(money%5);
      }
    }
cout<<change<<endl;
}
