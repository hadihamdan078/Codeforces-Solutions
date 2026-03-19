//https://codeforces.com/problemset/problem/1669/C
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
    string res="YES";
    vector<int>arr(n);
    for(int i=0;i<n;++i){
      cin>>arr[i];
    }
    int modone=arr[0]%2;
    int modtwo=arr[1]%2;
    for(int i=0;i<n;i+=2){
      if(arr[i]%2!=modone) res="NO";
    }
    for(int i=1;i<n;i+=2){
      if(arr[i]%2!=modtwo) res="NO";
    }
    cout<<res<<"\n";
  }
}
