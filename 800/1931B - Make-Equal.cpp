//https://codeforces.com/problemset/problem/1931/B
#include<iostream>
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
    vector<long long>arr(n);
    int sum=0;
    for(int i=0;i<n;++i){
      cin>>arr[i];
      sum+=arr[i];
    }
    int targ=sum/n;
    string res="YES";
    int sub=0;
    for(int i=0;i<n;++i){
      sub+=(arr[i]-targ);
      if(sub<0){
        res="no";
        break;
      }
    }
    cout<<res<<"\n";
  }
}
