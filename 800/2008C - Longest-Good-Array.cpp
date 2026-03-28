//https://codeforces.com/problemset/problem/2008/C
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin>>t;
  while(t--){
    long long l , r;
    cin>> l >> r;
    int sum=0;
    long long sub=1;
    long long num=l;
    while(num<=r){
      num=num+sub;
      sub++;
      sum++;
    }
    cout<<sum<<" \n";
  }
}
