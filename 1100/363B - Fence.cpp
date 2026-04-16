//https://codeforces.com/problemset/problem/363/B
#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n;
  cin>>n;
  int k;
  cin>>k;
  vector<long long>arr(n);
  vector<long long>pref(n+1,0);
  for(int i=0;i<n;++i){
    cin>>arr[i];
    pref[i+1]=pref[i]+arr[i];
  }
  long long min=15000000000000000;
  long long index=0;
  for(int i=k;i<=n;++i){
    long long sum=pref[i]-pref[i-k];
    
    if(sum<min){
      min=sum;
      index=i-k+1;
    }
  }
  cout<<index;
  
}
