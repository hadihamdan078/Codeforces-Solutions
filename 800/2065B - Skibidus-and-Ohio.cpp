//https://codeforces.com/problemset/problem/2065/B
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    int res=s.size();
    for(int i=0;i<s.size()-1;++i){
      if(s[i]==s[i+1]){
        res=1;
        break;
      }
    }
     cout<<res<<"\n";
  }
}
