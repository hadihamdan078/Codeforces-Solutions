//https://codeforces.com/problemset/problem/34/B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n , m;
  cin>> n >> m;
  vector<int>arr;
  int a;
  for(int i=0;i<n;++i){
    cin>>a;
    arr.push_back(a);
  }
  sort(arr.begin(),arr.end());
  int sum=0;
  for(int j=0;j<m;++j){
    if(arr[j]<0) sum+=arr[j];
  }
  cout<<-sum;
}
