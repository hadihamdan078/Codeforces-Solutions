//https://codeforces.com/problemset/problem/1543/A
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
      long long a , b;
      cin>> a >> b;
      if(a==b){
         cout<<0<<" "<<0<<"\n";
      }else{
         long long g=abs(a-b);
         cout<<g<<" "<<min(a%g,g-(a%g))<<"\n";         
      }
   } 
}
