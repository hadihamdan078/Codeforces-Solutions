//https://codeforces.com/problemset/problem/2044/C
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int m , a , b , c;
      cin>>m >> a >> b >>c;
      int sum=0;
      int mod=0;
      if(a<=m){
        sum+=a;
        mod+=m-a;
      }else if(a>m){
        sum+=m;
      
      }
      if(b<=m){
        sum+=b;
        mod+=m-b;
      }else if(b>m){
        sum+=m;
      }
      if(mod>=c){
        sum+=c;
      }else if(mod<c){
        sum+=mod;
      }
      cout<<sum<<"\n";
    }  
}
