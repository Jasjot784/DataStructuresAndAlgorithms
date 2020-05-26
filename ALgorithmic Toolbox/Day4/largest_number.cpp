#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b){
  int temp;
  temp = a;
  a = b;
  b =temp;
}
int main(){
  int n;
  cin>>n;
  int x[n];
  for(int i=0;i<n;++i)
  cin>>x[i];
  sort(x,x+n);

  for(int i =0;i<n;++i){
    cout<<x[i]<<" ";
  }
  cout<<endl;

  int firstdigits[n];
  int digitcount[n];
  int y[n];

  for(int i=0;i<n;++i)
  y[i]=x[i];

  for(int i=0;i<n;++i){
    int count =0;
    int digit =0;
    while(y[i]>0){
      digit = y[i]%10;
      y[i]/=10;
      count++;
    }
    digitcount[i] = count;
    firstdigits[i] = digit;
  }
  for(int i =0;i<n;++i){
    cout<<firstdigits[i]<<" ";
  }cout<<endl;
  for(int i =0;i<n;++i){
    cout<<digitcount[i]<<" ";
  }cout<<endl<<endl;

    int l =n;
    int number =0;
    while (l--) {
      int index = max_element(firstdigits, firstdigits+n)-firstdigits;
      number = (number*(pow(10,digitcount[index]))+x[index]);
      cout<<number<<" ";

      //cout<<index<<" ";
      //cout<<x[index]<<" ";
      firstdigits[index] = 0;
      // swap(digitcount[index],digitcount[n-1]);
      //digitcount.erase(digitcount.end());
      //digitcount.resize(l--);

      // swap(firstdigits[index],firstdigits[n-1]);
      //firstdigits.erase(firstdigits.end());
      //firstdigits.resize(l--);

      // swap(x[index],x[n-1]);
      //x.erase(x.end());
      //x.resize(l--);

    }
}
//pta ni answer kyun ni a rea
