//https://codeforces.com/problemset/problem/584/A
#include<iostream>
#include<string>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n ,t;
  cin>>n >> t;
  if(n==1 && t==10){
    cout<<-1;
  }
  else if(t==10){
    cout<<1;
    for(int i=1;i<n;++i){
      cout<<0;
    }
  }else{
    for(int i=1;i<=n;++i){
      cout<<t;
    }
  }
}
