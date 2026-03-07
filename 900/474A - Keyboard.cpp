//https://codeforces.com/problemset/problem/474/A
#include<iostream>
using namespace std;
int main(){
  string s="qwertyuiop[]asdfghjkl;'zxcvbnm,./";
  char LR;
  cin>>LR;
  string input;
  cin>>input;
  if(LR=='R'){
    for(int i=0;i<input.size();++i){
      char letter=input[i];
      for(int j=0;j<s.size();++j){
        if(letter==s[j]){
          cout<<s[j-1];
          break;
        }
      }
    }
  }else{
    for(int k=0;k<input.size();++k){
      char letter=input[k];
      for(int g=0;g<s.size();++g){
        if(letter==s[g]){
          cout<<s[g+1];
          break;
        }
      }
    } 
  }
}
