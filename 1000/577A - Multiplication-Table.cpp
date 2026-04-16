//https://codeforces.com/problemset/problem/577/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n;
  cin>>n;
  long long x;
  cin>>x;
  int sum=0;
  for(int i=1;i<=n;++i){
    if(x%i==0 && x/i<=n){
      sum++;
      
    }
  }
  cout<<sum;
} 
