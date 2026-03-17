//https://codeforces.com/problemset/problem/1915/B
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      string orginal="ABC";
      string res;
      string s;
      for(int i=1;i<=3;++i){
        cin>>s;
        sort(s.begin(),s.end());
        for(int j=0;j<3;++j){
          if(s[j]!=orginal[j]){
            res=orginal[j];
          }
        }
      }
      cout<<res<<"\n";
    }  
}
