//https://codeforces.com/problemset/problem/1433/A
#include<iostream>
#include<string>
int pref(int x){
   int sum=0;
   for(int i=1;i<=x;++i){
      sum+=i;
   }
   return sum;
}
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
      int x;
      cin>>x;
      string str=to_string(x);
      int sum=10*(x%10-1)+pref(str.size());
      cout<<sum<<"\n";

   } 
}
