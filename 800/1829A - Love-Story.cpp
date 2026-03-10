//https://codeforces.com/problemset/problem/1829/A
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  string orginal="codeforces";
  while(t--){
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<10;++i){
      if(s[i]!=orginal[i])
      sum++;
    }
    cout<<sum<<"\n";
  }
}
