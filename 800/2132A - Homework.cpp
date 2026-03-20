//https://codeforces.com/problemset/problem/2132/A
#include<iostream>
#include<string>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string a;
      cin>>a;
      int m;
      cin>>m;
      string b;
      cin>>b;
      string c;
      cin>>c;
      for(int i=0;i<m;++i){
        if(c[i]=='D'){
          a+=b[i];
        }else if(c[i]=='V'){
          a.insert(a.begin(),b[i]);
        }
      }
      cout<<a<<"\n";
    }
}
