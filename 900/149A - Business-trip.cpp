//https://codeforces.com/problemset/problem/149/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int k;
  cin>>k;
  int a;
  vector<int>arr;
  for(int i=0;i<12;++i){
    cin>>a;
    arr.push_back(a);
  }
  int res=-1;
  sort(arr.begin(),arr.end());
  int sum=0;
  int month=0;
  if(k==0){
    res=0;
  }else{
     for(int i=arr.size()-1;i>=0;--i){
        sum+=arr[i];
        month++;
        if(sum>=k){
          res=month;
           break;
        }
      }
  }
  cout<<res;
}
