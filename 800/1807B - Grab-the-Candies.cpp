//https://codeforces.com/problemset/problem/1807/
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
      int a;
      int even=0;
      int odd=0;
      for(int i=1;i<=n;++i){
        cin>>a;
        if(a%2==0){
          even+=a;
        }else{
          odd+=a;
        }
      }
      if(even>odd){
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
    }  
}
