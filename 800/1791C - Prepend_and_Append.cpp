//https://codeforces.com/problemset/problem/1791/C
#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i;
    int j;
    int sum=0;
    for(i=0 , j=s.size()-1 ;i<=j; ++i , --j){
      if(s[i]!=s[j]){
        sum+=2;
      }else{
        break;
      }
    }
    cout<<s.size()-sum<<"\n";
  }
}
