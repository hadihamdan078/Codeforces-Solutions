//https://codeforces.com/problemset/problem/567/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int n;
    cin>>n;
    vector<long long>arr(n);
    for(int i=0;i<n;++i){
      cin>>arr[i];
    }
    cout<<abs(arr[0]-arr[1])<<" "<<abs(arr[n-1]-arr[0])<<"\n";
    for(int i=1;i<n-1;++i){
      long long befor=abs(arr[i]-arr[i-1]);
      long long after=abs(arr[i]-arr[i+1]);
      long long first=abs(arr[i]-arr[0]);
      long long end=abs(arr[i]-arr[n-1]);
      cout<<min(befor,after)<<" "<<max(first,end)<<"\n";
    }
    cout<<abs(arr[n-1]-arr[n-2])<<" "<<abs(arr[n-1]-arr[0])<<"\n"; 
}
