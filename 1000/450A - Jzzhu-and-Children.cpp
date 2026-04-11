//https://codeforces.com/problemset/problem/450/A
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n , m;
  cin>>n >> m;
  vector<pair<int , int>>arr;
  for(int i=0;i<n;++i){
    int a;
    cin>>a;
    arr.push_back({a,i+1});
  }
  for(int i=0;i<n;++i){
    if(arr[i].first-m>0){
        int index=arr[i].second;
        arr.push_back({arr[i].first-m,index});
        n++;
    }
  }
  
  cout<<arr[n-1].second;

} 
