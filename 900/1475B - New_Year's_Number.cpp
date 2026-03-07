//https://codeforces.com/problemset/problem/1475/B
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int mod=n%2020;
    int div=n/2020;
    if(mod<=div){
      cout<<"yes\n";
    }else{
      cout<<"no\n";
    }
  }
}
