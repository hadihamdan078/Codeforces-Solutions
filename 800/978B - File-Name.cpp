//https://codeforces.com/problemset/problem/978/B
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n;
   cin>>n;
   string s;
   cin>>s;
   int sum=0;
   int tot=0;
   for(int i=0;i<n;++i){
    if(s[i]=='x'){
      sum++;
    }else if(s[i]!='x'){
      if(sum>=3){
        tot+=sum-2;
      }
      sum=0;
    }
    if(i==n-1 && sum>=3){
      tot+=sum-2;
    }
   }
   cout<<tot<<"\n";
}
