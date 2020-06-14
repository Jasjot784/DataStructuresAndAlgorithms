#include<bits/stdc++.h>
using namespace std;

int dp_change(int money){
  int coins[money+1] ;
  coins[0]= 0;
  int coin_values[]={1,5,10};
  for(int i = 1;i<=money;++i){
    coins[i] = INT_MAX;
    for(int j=0;j<3;++j){
      if(i>=coin_values[j]){
        int num_coins = coins[i-coin_values[j]]+1;
        if(num_coins<coins[i]){
          coins[i]=num_coins;
        }
      }
    }
  }
  return coins[money];
}
int main(){
  int money;
  cin>>money;

  int c = dp_change(money);

  cout<<c<<endl;
}
