//https://codeforces.com/problemset/problem/265/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
      string s;
      string t;
      cin>>s >> t;
      int pos=0;
      for(int i=0;i<t.size();++i){
        if(t[i]==s[pos]){
          pos++;
        }
      }  
      cout<<pos+1;
}
