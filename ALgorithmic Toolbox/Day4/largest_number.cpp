#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n;
  cin>>n;
  long long int x[n];
  for(long long int i=0;i<n;++i)
  cin>>x[i];
  sort(x,x+n);

  for(long long int i =0;i<n;++i){
  //  cout<<x[i]<<" ";
  }
  //cout<<endl;

  long long int firstdigits[n];
  long long int digitcount[n];
  long long int y[n];

  for(long long int i=0;i<n;++i)
  y[i]=x[i];

  for(long long int i=0;i<n;++i){
    long long int count =0;
    long long int digit =0;
    while(y[i]>0){
      digit = y[i]%10;
      y[i]/=10;
      count++;
    }
    digitcount[i] = count;
    firstdigits[i] = digit;
  }
  for(long long int i =0;i<n;++i){
  //  cout<<firstdigits[i]<<" ";
  }cout<<endl;
  for(long long int i =0;i<n;++i){
  //  cout<<digitcount[i]<<" ";
}//cout<<endl<<endl;

    long long int l =n;
    long long int number =0;
    
    while (l--) {
      long long int index = max_element(firstdigits, firstdigits+n)-firstdigits;
      number = (number*(pow(10,digitcount[index]))+x[index]);
      //cout<<number<<" ";

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
    cout<<number<<endl;
}
//pta ni answer kyun ni a rea
