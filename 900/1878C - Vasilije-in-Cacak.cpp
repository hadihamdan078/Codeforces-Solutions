//https://codeforces.com/problemset/problem/1878/C
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n , k , x;
    cin>>n >> k >> x;
    long long sumfirst=k*(k+1)/2;
    long long sumend=k*(2*n-k+1)/2;
    if(x<=sumend && x>=sumfirst) cout<<"yes\n";
    else cout<<"no\n";
  }
}
