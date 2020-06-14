#include<iostream>
using namespace std;
int recursive_change(int money){
  if(money == 0){
    return 0;
  }else{
    if(money<5)
    return money;
    else{
      if(money>=5 && money<10)
      return (1+money%5);
      else{
        return (1+recursive_change(money-10));
      }
    }
  }
}
int main(){
  int money;
  cin>>money;

  int c = recursive_change(money);

  cout<<c<<endl;
}
