//https://codeforces.com/problemset/problem/2051/B
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a , b , c;
      cin>> a >> b >> c;
      int cycle=n/(a+b+c);
      int mod=n%(a+b+c);
      if(mod==0){
        cout<<cycle*3<<"\n";
      }else if(mod<=a){
        cout<<cycle*3+1<<"\n";
      }else if(mod<=(b+a)){
        cout<<cycle*3+2<<"\n";
      }else if(mod<=(a+b+c)){
        cout<<cycle*3+3<<"\n";
      }
    }
}
