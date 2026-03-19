//https://codeforces.com/problemset/problem/1999/C
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    int n , s , m;
    cin>>n >> s >> m;
    int l , r;
    string res="NO";
    cin>>l >> r;
    if(l>=s){
      res="YES";
    }
    int value_r=r;
    for(int i=1;i<=n-1;++i){
      cin>>l >>r;
      if((l-value_r) >= s){
        res="YES";
      }
      value_r=r;
    }
    if(m-value_r>=s){
      res="YES";
    }
    cout<<res<<"\n";
  }
}
