//https://codeforces.com/problemset/problem/1878/A
#include<iostream>
#include<vector>
using namespace std;
int main (){
  int t;
  cin>>t;
  while(t--){
    string s="NO";
    int n , k;
    cin>>n;
    cin>>k;
    int a;
    vector<int>arr;
    for(int i=0;i<n;++i){
      cin>>a;
      arr.push_back(a);
    }
    for(int i=0;i<n;++i){
      if(arr[i]==k){
        s="YES";
      }
    }
    cout<<s<<"\n";
  }
}
