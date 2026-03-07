//https://codeforces.com/problemset/problem/1560/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  vector<int>arr;
  for(int i=0;i<=1670;++i){
    if(i%3!=0 && i%10!=3){
      arr.push_back(i);
    }
  }
  while(t--){
    int k;
    cin>>k;
    cout<<arr[k-1]<<"\n";
  }
}
