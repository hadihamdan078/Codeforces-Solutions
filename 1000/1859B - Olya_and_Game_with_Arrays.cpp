//https://codeforces.com/problemset/problem/1859/B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin>>t;
  while(t--){
    long long num;
    cin>>num;
    vector<long long>first;
    vector<long long>second;
    while(num--){
      long long m;
      cin>>m;
      vector<long long>arr(m);
      for(int i=0;i<m;++i){
        cin>>arr[i];
      }
      sort(arr.begin(),arr.end());
      first.push_back(arr[0]);
      second.push_back(arr[1]);
    }
    long long sum=0;
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());
    sum+=first[0];
    for(int i=second.size()-1;i>0;--i){
      sum+=second[i];
    }
    cout<<sum<<"\n";
  }
}
