//https://codeforces.com/problemset/problem/1811/A
#include<iostream>
#include<string>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin>>t;
  while(t--){
    int n , d;
    cin>>n>>d;
    string dd=to_string(d);
    string s;
    cin>>s;
    for(int i=0;i<n;++i){
      if(dd[0]>s[i]){
        s.insert(i,1,dd[0]);
        break;
        
      }
    }
    if(s.size()==n){
      s.insert(n,1,dd[0]);
    }
    cout<<s<<"\n";
  }
}
