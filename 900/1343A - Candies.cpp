//https://codeforces.com/problemset/problem/1343/A
#include<iostream>
#include<cmath>
using namespace std;
int po(int x){
  long long sum=0;
   for(int i=0;i<x;++i){
    sum+=pow(2,i);
   }
   return sum;
}
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    for(int i=2;i<n;++i){
    long long div=po(i);
    if(n%div==0){
      long long x=n/div;
      cout<<x<<"\n";
      break;
    }
    }
  }
}
