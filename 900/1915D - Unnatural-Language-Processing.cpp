//https://codeforces.com/problemset/problem/1915/D
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
      string s;
      cin>>s;
      for(int i=1;i<n-1;++i){
        if(s[i]=='c' || s[i]=='d' || s[i]=='b'){
          if((s[i-1]=='a' || s[i-1]=='e') &&(s[i+1]=='a' || s[i+1]=='e')){
            s.insert(i,1,'.');
            n++;
          }else if((s[i-1]=='a' || s[i-1]=='e') &&(s[i+1]!='a' || s[i+1]!='e')){
            s.insert((i+1),1,'.');
            n++;
          }
        }
      }
      cout<<s<<"\n";
    }
}
