//https://codeforces.com/problemset/problem/230/A
#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int s , n;
  cin>>s >> n;
  int x , y;
  string res="YES";
  vector<pair<int , int>>arr;
  for(int i=0;i<n;++i){
    cin>>x >> y;
    arr.push_back({x,y});
  }
  sort(arr.begin(),arr.end());
  for(int i=0;i<n;++i){
    if(s>arr[i].first){
        s+=arr[i].second;
    }else{
        res="NO";
        break;
    }
  }
  cout<<res;
} 
