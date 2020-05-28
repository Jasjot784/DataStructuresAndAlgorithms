#include<iostream>
using namespace std;

int BinarySearch(int arr[],int low,int high,int key){
  int mid = (low+high)/2;
  if(arr[mid]==key)
  return mid;
  else{
    if(arr[mid]>key)
    return BinarySearch(arr,low,mid-1,key);
    else
    return BinarySearch(arr,mid+1,high,key);
  }
}
int main(){
  int n,key;
  cin>>n>>key;
  int arr[n];
  for(int i=0;i<n;++i){
    cin>>arr[i];
  }

  int c = BinarySearch(arr,0,n-1,key);
  cout<<c<<endl;
}
