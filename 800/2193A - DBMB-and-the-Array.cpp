//https://codeforces.com/problemset/problem/2193/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin>>t;
  while(t--){
    int n , s , x;
    cin>> n >> s >> x;
    int sum=0;

    for(int i=1;i<=n;++i){
      int a;
      cin>>a;
      sum+=a;
    }
    if(sum==s){
      cout<<"YES\n";
    }else if(sum>s){
      cout<<"NO\n";
    }else{
      int sub=s-sum;
      if(sub%x==0){
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
    }
  }
}
