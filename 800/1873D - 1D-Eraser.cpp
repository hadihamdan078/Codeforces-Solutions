//https://codeforces.com/problemset/problem/1873/D
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    int n , k;
    cin>>n >> k;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<n;++i){
      if(s[i]=='B'){
        sum++;
        i+=k-1;
      }
    }
    cout<<sum<<"\n";
  }
}
