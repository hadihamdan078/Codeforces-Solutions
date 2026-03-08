//https://codeforces.com/problemset/problem/758/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a;
  vector<int>arr;
  for(int i=0;i<n;++i){
    cin>>a;
    arr.push_back(a);
  }
  sort(arr.begin(),arr.end());
  int max=arr[n-1];
  int sum=0;
  for(int i=0;i<arr.size()-1;++i){
    sum+=max-arr[i];
  }
  cout<<sum;
}
