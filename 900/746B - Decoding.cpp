//https://codeforces.com/problemset/problem/746/B
#include<iostream>
#include<string>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n;
  cin>>n;
  string s;
  cin>>s;
  string c="";
  int size_s=n;
  for(int i=0;i<n;++i){
    if(size_s%2==1){
      c.push_back(s[i]);
    }else if(size_s%2==0){
      c.insert(0,1,s[i]); 
    }
    size_s--;
  }
  cout<<c;
}
