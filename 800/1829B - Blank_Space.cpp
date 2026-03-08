//https://codeforces.com/problemset/problem/1829/B
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
    int sum=0;
    int max=0;
    for(int i=0;i<n;++i){
      if(arr[i]==0){
        sum++;
      }else{
        sum=0;
      }
      if(sum>max) max=sum;
    }
    cout<<max<<"\n";
  }
}
