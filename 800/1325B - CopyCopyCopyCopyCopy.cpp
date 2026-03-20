//https://codeforces.com/problemset/problem/1325/B
#include<iostream>
#include<vector>
#include<set>
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
      set<int>distinct(arr.begin(),arr.end());
      cout<<distinct.size()<<"\n";
    }
}
