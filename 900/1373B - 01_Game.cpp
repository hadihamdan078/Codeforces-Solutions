//https://codeforces.com/problemset/problem/1373/B
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int one=0;
    int zero=0;
    for(int i=0;i<s.size();++i){
      if(s[i]=='1') one++;
      else zero++;
    }
    if(min(one,zero)%2==1) cout<<"DA\n";
    else cout<<"NET\n";
  }
}
