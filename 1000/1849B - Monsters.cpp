//https://codeforces.com/problemset/problem/1849/B
#include<iostream>
#include<vector>
#include<utility>
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
    vector<pair<int , int>>arr;
    int sum=0;
    for(int i=0;i<n;++i){
      int a;
      cin>>a;
      if(a%k==0){
        cout<<i+1<<" ";
      }else{
        arr.push_back({a%k,i+1});
      }
      
    }
    sort(arr.begin(),arr.end(),[](const pair<int,int>& a ,const pair<int,int>& b){
      if(a.first!=b.first){
        return a.first>b.first;
      }
        return a.second< b.second;
      
     }
    );
    
    for(int i=0;i<arr.size();++i){
      cout<<arr[i].second<<" ";
    }
   
    
    cout<<"\n";
  }
}
