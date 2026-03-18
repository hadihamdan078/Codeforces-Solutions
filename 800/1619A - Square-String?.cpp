//https://codeforces.com/problemset/problem/1619/A
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
      string res="YES";
      if(s.size()%2==1){
        res="NO";
      }else{
        int i;
        int j;
        for( i=0 , j=s.size()/2;i<s.size()/2;++i , ++j){
          if(s[i]!=s[j]){
            res="NO";
            break;
          } 
        }
      }
      cout<<res<<"\n";
    }
}
