//https://codeforces.com/problemset/problem/208/A
#include<iostream>
using namespace std;
int main (){
  string s;
  cin>>s;
  int sum=0;
  bool space=false;
  for(int i=0;i<=s.size()-1;i++){

    if(i+2<s.size() && s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' ){
      i+=2;
      if(space){
        cout<<" ";
        space=false;
      }
    }else{ 
      
      cout<<s[i];
      space=true;
      
    }
  }
} 
