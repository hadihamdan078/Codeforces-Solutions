//https://codeforces.com/problemset/problem/492/A
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int n;
    cin>>n;
    long long sum=0;
    long long tot=0;
    int level=0;
    for(int i=1;i<=n;++i){
      sum+=i;
      tot+=sum;
      if(tot<=n){
        level=i;      
      }
    } 
    cout<<level;
}
