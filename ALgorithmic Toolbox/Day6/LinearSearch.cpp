#include<iostream>
using namespace std;
int LinearSearch(int arr[],int low,int high,int key){
  if(high<low)
  return -1;
  if(arr[low]==key)
  return low;
  return LinearSearch(arr,low+1,high,key);
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
