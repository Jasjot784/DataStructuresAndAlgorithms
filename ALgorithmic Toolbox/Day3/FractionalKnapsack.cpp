#include<iostream>
#include<algorithm>
using namespace std;

class knapsack{
  int w;
  int v;
public:
  knapsack(){
    w=0;
    v=0;
  }
  void initialize(){
    cin>>w>>v;
  }
  int perUnit(){
    return (v/w);
  }
  int weight(){
    return w;
  }
  int value(){
    return v;
  }
};

int main(){
  int n,W,value=0;
  cin>>n>>W;
  knapsack arr[n];
  int net[n];
  for(int i=0;i<n;++i){
    arr[i].initialize();
    net[i] = arr[i].perUnit();
  }
  sort(net,net+n,greater<int>());
  int j=0;
  if(W==0)
  cout<<value<<endl;
  while(W!=0){
  for(int i = 0;i<n;++i){
    if((arr[i].weight())*(net[j])==arr[i].value())
    {
      if(arr[i].weight()<=W){
        value = value+arr[i].value();
        W-=arr[i].weight();
        cout<<value<<" 1 ";
        j++;
      }
      else{
        value = value+(net[j]*W);
        W=0;
        cout<<value<<" 2 ";
        break;
      }
    }
    else{
      continue;
    }
  }}
  cout<<value<<endl;

}
