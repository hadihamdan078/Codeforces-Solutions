//https://codeforces.com/problemset/problem/432/A
#include<iostream>
using namespace std;
int main(){
  int n , k;
  cin>>n >> k;
  int a;
  int sum=0;
  for(int i=0;i<n;++i){
    cin>>a;
    if(a+k<=5){
      sum++;
    }
  }
  cout<<sum/3;
}
