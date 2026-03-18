//https://codeforces.com/problemset/problem/1606/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    int ab=0;
    int ba=0;
    int index_a=0;
    int index_b=0;
    for(int i=0;i<s.size();++i){
      if(i<s.size() && s[i]=='a' && s[i+1]=='b'){
        ab++;
      }else if(i<s.size() && s[i]=='b' && s[i+1]=='a'){
        ba++;
      }
      if(s[i]=='a') index_a=i;
      else index_b=i;
    }
    if(ab==ba){
      cout<<s<<"\n";
    }else if(ab>ba){
      s[index_b]='a';
      cout<<s<<"\n";
    }else{
      s[index_a]='b';
      cout<<s<<"\n";
    }
   }
}
