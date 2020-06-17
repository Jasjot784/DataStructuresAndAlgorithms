#include<bits/stdc++.h>
using namespace std;
int main(){
  string s1,s2;
  cin>>s1;
  cin>>s2;

  int arr[s1.size()+1][s2.size()+1];

  for(int i = 0;i<=s1.size();++i){
    for(int j = 0;j<=s2.size();++j){
    arr[i][j]=0;
  }
  }

  for(int i = 0;i<=s1.size();++i)
  arr[i][0] = i;

  for(int i = 0;i<=s2.size();++i)
  arr[0][i] = i;

  for(int j = 1;j<=s1.size();++j){
    for(int i = 1;i<=s2.size();++i){
        int insertion = arr[i][j-1]+1;
        int deletion = arr[i-1][j]+1;
        int match = arr[i-1][j-1];
        int mismatch = arr[i-1][j-1]+1;
        vector<int> v;
        v.push_back(insertion);
        v.push_back(deletion);

        if (s1[i]==s2[j]) {
          v.push_back(match);
          arr[i][j] = *min_element(v.begin(), v.end());
        }else{
            v.push_back(mismatch);
            arr[i][j] = *min_element(v.begin(), v.end());
        }
  }
  }
cout<<arr[s1.size()-1][s2.size()-1];
}
