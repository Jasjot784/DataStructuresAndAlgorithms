#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m ;
  int arr[n+1];
  int arr1[n+1];
  vector<int> v(m+1,0);
  vector<int> pos(m+1,0);

  for(int i =1;i<n+1;++i)
  cin>>arr[i];

  for(int i=1;i<n+1;++i){
    v[arr[i]]+=1;
  }
    pos[1] = 1;

    for(int j=2;j<m+1;++j)
    pos[j] = pos[j-1]+v[j-1];

    for(int i =1;i<n+1;++i){
      arr1[pos[arr[i]]] = arr[i];
      pos[arr[i]]+=1;
    }
    for(int i = 1;i<n+1;++i)
    cout<<arr1[i]<<" ";

}
