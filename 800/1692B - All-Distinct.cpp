//https://codeforces.com/problemset/problem/1692/B
#include<iostream>
#include<set>
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
    vector<int>arr(n);
    for(int i=0;i<n;++i){
      cin>>arr[i];
    }
    int size_arr=arr.size();
    set<int>check(arr.begin(),arr.end());
    
    if(size_arr==check.size()){
      cout<<size_arr<<"\n";
    }else if((size_arr-check.size())%2==0){
      cout<<check.size()<<"\n";
    }else{
      cout<<check.size()-1<<"\n";
    }
  } 
}
