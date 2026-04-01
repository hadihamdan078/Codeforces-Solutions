//https://codeforces.com/problemset/problem/1/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  long long n , m ,a;
  cin>> n >> m >> a;
  long long l=(n+a-1)/a;
  long long w=(m+a-1)/a;
  cout<<l*w;
}
