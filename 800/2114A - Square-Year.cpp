//https://codeforces.com/problemset/problem/2114/A
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin>>t;
  while(t--){
    long long s;
    cin>>s;
    long long sq=round(sqrt(s));
    if(sq*sq==s){
        cout<<sq<<" "<<0<<"\n";
    }else{
        cout<<-1<<"\n";
    }
  }
}
