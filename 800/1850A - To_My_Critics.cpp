//https://codeforces.com/problemset/problem/1850/A
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b ,c;
    cin>>a >> b >> c;
    if(a+b>=10){
      cout<<"yes\n";
      continue;
    }else if(b+c>=10){
      cout<<"yes\n";
      continue;
    }else if(a+c>=10){
      cout<<"yes\n";
      continue;
    }else{
      cout<<"no\n";
    }
  }
}
