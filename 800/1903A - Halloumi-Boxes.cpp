//https://codeforces.com/problemset/problem/1903/A
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
    int n , k;
    cin>>n >> k;
    string res="YES";
    vector<long long>arr(n);
    
    for(int i=0;i<n;++i){
      cin>>arr[i];
    } 
    vector<long long>copy=arr;
    sort(copy.begin(),copy.end());
    if(k==1){
      for(int i=0;i<n;++i){
        if(arr[i]!=copy[i]){
          res="NO";
          break;
        }
      }
    }
    cout<<res<<"\n";
  }
}
