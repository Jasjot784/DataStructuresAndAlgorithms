#include<iostream>
using namespace std;
int LinearSearch(int arr[],int low,int high,int key){
  for(int i=low;i<=high;++i){
    if(arr[i]==key)
    return i;
  }
  return -1;
}
int main(){
  int n,key;
  cin>>n>>key;
  int arr[n];
  for(int i= 0;i<n;++i)
  cin>>arr[i];

  int c = LinearSearch(arr,0,n-1,key);
  cout<<c<<endl;
}
