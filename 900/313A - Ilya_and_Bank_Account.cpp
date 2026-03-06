//https://codeforces.com/problemset/problem/313/A
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n>=0){
    cout<<n;
  }else{
    int last=n%10;
    n=n/10;
    int befor_last=n%10;
    if(last<befor_last){
      cout<<n;
    }else{
      cout<<(n/10)*10+last;
    }
  }
