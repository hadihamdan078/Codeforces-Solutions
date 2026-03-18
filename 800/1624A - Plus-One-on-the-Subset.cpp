//https://codeforces.com/problemset/problem/1624/A
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
    sort(arr.begin(),arr.end());
    cout<<arr[n-1]-arr[0]<<"\n";
    
   }
}
