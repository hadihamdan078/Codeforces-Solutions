//https://codeforces.com/problemset/problem/1512/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>arr;
    int a;
    for(int i=0;i<n;++i){
      cin>>a;
      arr.push_back(a);
    }
    int index;
    for(int i=0;i<n-1;++i){
      if(arr[i]!=arr[i+1]){
        index=i+1;
        break;
      }
    }
    if(arr[0]!=arr[1] && arr[0]!=arr[2]){
      cout<<1<<"\n";
    }else{
      cout<<index+1<<"\n";
    }
  }
}
