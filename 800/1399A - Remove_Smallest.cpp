//https:codeforces.com/problemset/problem/1399/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    
    vector<int>arr;
    
    int a;
    
    for(int i=0;i<n;++i){
      cin>>a;
      arr.push_back(a);
    }
    int sum=0;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;++i){
      if(abs(arr[i+1]-arr[i])<=1){
        sum++;
      }
    }
    if(sum==n-1) cout<<"YES\n";
    else        cout<<"NO\n";
  }
}
