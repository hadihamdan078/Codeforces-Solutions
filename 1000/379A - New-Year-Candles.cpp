//https://codeforces.com/problemset/problem/379/A
#include<iostream>
#include<cmath>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int a , b;
  cin>>a >> b;
  int sum=a;
  int sub=b-1;
  while(a/b!=0){
    cout<<(double(a))/b<<" "<<ceil(double(a)/b)<<" ";
    sum+=(a)/b;
    a=(a)/b;
    cout<<a<<"\n";
  }
  cout<<sum;
}
