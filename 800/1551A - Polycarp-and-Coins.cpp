//https://codeforces.com/problemset/problem/1551/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    int c1=n/3;
    int c2=(n+2)/3;
    if(c1+2*c2==n){
      cout<<c1<<" "<<c2<<"\n";
    }else{
      cout<<c2<<" "<<c1<<"\n";
    }
  }
}
