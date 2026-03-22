//https://codeforces.com/problemset/problem/2131/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>arr1(n);
      vector<int>arr2(n);
      for(int i=0;i<n;++i){
        cin>>arr1[i];
      }
      for(int i=0;i<n;++i){
        cin>>arr2[i];
      }
      int sub=0;
      for(int i=0;i<n;++i){
        if(arr1[i]>arr2[i]){
          sub+=arr1[i]-arr2[i];
        }
      }
      cout<<sub+1<<"\n";

    }
}
