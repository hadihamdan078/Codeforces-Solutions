//https://codeforces.com/problemset/problem/1409/A
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a , b;
    cin>>a >>b;
    int k=abs(a-b);
    if(k%10==0){
      cout<<k/10<<"\n";
    }else{
      cout<<k/10+1<<"\n";
    }
  }
}
