//https://codeforces.com/problemset/problem/1679/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
      long long n;
      cin>>n;
      if(n%2==1 || n<4){
        cout<<-1<<"\n";
      }else{
        cout<<(n+5)/6<<" "<<n/4<<"\n";
      }
  }
}
