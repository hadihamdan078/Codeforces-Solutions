//https://codeforces.com/problemset/problem/1560/B
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int a , b , c;
      cin>>a >>b >> c;
      int res=-1;
      int sub=abs(a-b);
      if(a<sub && b<sub){
        res=-1;
      }else if(a>sub && b>sub){
        res=-1;
      }else if((c+sub)<=2*sub){
        res=c+sub;
      }else if((c-sub)>0 && (c-sub)<=sub){
        res=c-sub;
      }
      cout<<res<<"\n";
    }
}
