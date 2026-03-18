//https://codeforces.com/problemset/problem/1283/A
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    int h , m;
    cin>>h >> m;
    cout<<(24-h)*60-m<<"\n";
   }
}
