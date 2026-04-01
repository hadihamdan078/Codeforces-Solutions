//https://codeforces.com/problemset/problem/118/A
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  string s;
  cin>>s;
  string print="";
  transform(s.begin(),s.end(),s.begin(),::tolower);
  print+='.';
  for(int i=0;i<s.size();++i){
    if(s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!='e' && s[i]!='u' && s[i]!='i'){
        print+=s[i];
        print+='.';
    }
  }
  print.erase(print.size()-1,1);
  cout<<print;

}
