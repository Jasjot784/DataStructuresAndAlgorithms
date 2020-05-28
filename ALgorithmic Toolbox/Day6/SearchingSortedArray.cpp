#include<iostream>
#include<algorithm>
using namespace std;

int SearchingSortedArray(int arr[],int n,int key){
  for(int i = 0;i<n;++i){
    if(arr[i]==key)
    return i;
    else{
      if(arr[i]<key&&arr[i+1]>key)
      return i;
    }
  }
}
int main(){
  int n,key;
  cin>>n>>key;
  int arr[n];

  for(int i = 0;i<n;++i)
  cin>>arr[i];
  sort(arr,arr+n);

  int c = SearchingSortedArray(arr,n,key);
  cout<<c<<endl;
}
