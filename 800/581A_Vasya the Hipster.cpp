//https://codeforces.com/contest/581/problem/A
#include<iostream>
#include<cmath>
using namespace std;
int main (){
  int a , b;
  cin>>a >>b;
  cout<<min(a,b)<<" "<<abs(a-b)/2;
}
