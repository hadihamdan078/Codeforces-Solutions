//https://codeforces.com/problemset/problem/1760/C
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;++i){
        cin>>arr[i];
      }
      vector<int>copy=arr;
      sort(copy.begin(),copy.end());
      int max=copy[n-1];
      int sec_max=copy[n-2];
      for(int i=0;i<n;++i){
        if(arr[i]==max){
          cout<<arr[i]-sec_max<<" ";
        }else{
          cout<<arr[i]-max<<" ";
        }
      }
      cout<<"\n";
    }  
}
