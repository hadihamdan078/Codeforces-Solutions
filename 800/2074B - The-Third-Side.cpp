//https://codeforces.com/problemset/problem/2074/B
//Maximum side using Tringle Inequality
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
     long long a;
     long long sum=0;
      for(int i=0;i<n;++i){
        cin>>a;
        sum+=a;
      }
      cout<<sum-(n-1)<<"\n";
  }
}
