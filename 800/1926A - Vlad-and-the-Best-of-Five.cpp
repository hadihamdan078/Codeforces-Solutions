//https://codeforces.com/problemset/problem/1926/A
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    int sum_A=0;
    for(int i=0;i<s.size();++i){
      if(s[i]=='A') sum_A++;
    }
   
   if(sum_A>s.size()-sum_A){
    cout<<"A\n";
   }else{
    cout<<"B\n";
   }
  }
}
