//https://codeforces.com/problemset/problem/977/B
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int max=0;
  string two_gram;
  for(int i=0;i<s.size()-1;++i){
    string d="";
    d+=s[i];
    d+=s[i+1];
    int sum=0;
    for(int i=0;i<s.size()-1;++i){
      string g="";
      g+=s[i];
      g+=s[i+1];
      if(d==g){
        sum++;
      }
    }
    if(sum>max){
       max=sum;
       two_gram=d;
    }
  }
  cout<<two_gram;
}
