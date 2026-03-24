//https://codeforces.com/problemset/problem/214/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    
      int n , m;
      cin>>n >> m;
      int sum=0;
      for(int i=0;i<=min(n,m);++i){
        for(int j=0;j<=min(n,m);++j){
          if(i*i+j==n && i+j*j==m){
            sum++;
          }
        }
      }

    cout<<sum;
}
