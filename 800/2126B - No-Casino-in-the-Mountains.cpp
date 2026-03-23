//https://codeforces.com/problemset/problem/2126/B
#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
      int n , k;
      cin>>n >> k;
      vector<int>arr(n);
      vector<long long>pref(n+1,0);
      for(int i=0;i<n;++i){
        cin>>arr[i];
        pref[i+1]=pref[i]+arr[i];
      }
      int sum=0;
      int i=0;
      while(i<=n-k){
        if(pref[i+k]-pref[i]==0){
          sum++;
          i+=(k+1);
        }else{
          i++;
        }
      }
      cout<<sum<<"\n";
    }
}
