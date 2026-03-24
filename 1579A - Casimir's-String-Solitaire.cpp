//https://codeforces.com/problemset/problem/1579/A
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
      int count_A=0;
      int count_B=0;
      int count_C=0;
      for(int i=0;i<s.size();++i){
        if(s[i]=='A'){
          count_A++;
        }else if(s[i]=='B'){
          count_B++;
        }else{
          count_C++;
        }
      }
      if(count_A+count_C==count_B){
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
    }
}
