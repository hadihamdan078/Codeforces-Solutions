//https://codeforces.com/problemset/problem/1900/A
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
      int one=0;
      int num=0;
      for(int i=0;i<n;++i){
         if(s[i]=='.'){
            num++;
            if(i<n-1){
               continue;
            }
         }
         if(num>=3){
            sum+=2;
            num=0;
            break;
         }else{
            one+=num;
            num=0;
         }
      }
      if(sum==2){
         cout<<sum<<"\n";
      }else{
         cout<<one<<"\n";
      }
   } 
}
