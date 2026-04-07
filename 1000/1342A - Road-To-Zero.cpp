//https://codeforces.com/problemset/problem/1342/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin>>t;
  while(t--){
    long long x , y;
    cin>>x >> y;
    long long a , b;
    cin>>a >> b;
    long long sum_a=min(x,y);
    long long sum_b=max(x,y)-sum_a;
    
    long long aa=(x+y)*a;
    
    long long bb=sum_a*b+sum_b*a;
    cout<<min(aa,bb)<<"\n";
  }
}
