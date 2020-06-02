#include<iostream>
using namespace std;
int partition(int [],int ,int);
void QuickSort(int arr[],int l,int r){
  if(l>=r){
    for(int i=0;i<r+1;++i)
    cout<<arr[i]<<" ";
  }
  else{
    int m = partition(arr,l,r);
    QuickSort(arr,l,m-1);
    QuickSort(arr,m+1,r);
    // for(int i=0;i<r+1;++i)
    // cout<<arr[i]<<" ";
  }
}
int partition(int arr[],int l,int r){
  int x = arr[l];
  int j = l;
  for(int i =l+1;i<r+1;++i){
    if(arr[i]<=x){
      j+=1;
      int temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
  }
  int temp = arr[l];
  arr[l] = arr[j];
  arr[j] = temp;
  return j;
}
int main(){
  int n;
  cin>>n;
  int arr[n];

  for(int i=0;i<n;++i)
  cin>>arr[i];
  QuickSort(arr,0,n-1);
}
