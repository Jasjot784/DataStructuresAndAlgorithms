#include<iostream>
using namespace std;

int BinarySearch(int arr[],int low,int high,int key){
  while (low<=high) {
    int mid = (low+high)/2;
    if(arr[mid]==key)
    return mid;
    else{
      if(arr[mid]>key)
      high = mid-1;
      else
      low=mid+1;
  }}return (low-1);
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
