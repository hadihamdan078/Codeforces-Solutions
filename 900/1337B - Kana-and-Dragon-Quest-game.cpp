//https://codeforces.com/problemset/problem/1337/B
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
      long long x;
      cin>>x;
      int n , m;
      cin>> n >> m;
      if(m*10>=x){
        cout<<"YES\n";
      }else{
      while(n--){
        x=(x/2)+10;
        if(x<=m*10){
          break;
        }
      }
      while(m--){
        x-=10;
      }
      if(x<=0){
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
    }
  }
}
