//https://codeforces.com/problemset/problem/479/A
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int a , b, c;
  cin>> a >> b >> c;
  int arr[5]={a+(b*c),a*(b+c),a*b*c,(a+b)*c,(a+b+c)};
  auto big=max_element(arr,arr+5);
  cout<<*big;
}
