//https://codeforces.com/problemset/problem/1941/C
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
      int sum=0;
      for(int i=0;i<n;++i){
         if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && i<n){
            sum++;
            i+=2;
         }else if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e' && i<n){
            sum++;
            i+=2;
         }
      }
      cout<<sum<<"\n";
    }  
}
