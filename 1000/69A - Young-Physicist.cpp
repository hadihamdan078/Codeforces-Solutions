//https://codeforces.com/problemset/problem/69/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n;
  cin>>n;
  int x , y , z;
  int sum_x=0;
  int sum_y=0;
  int sum_z=0;
  while(n--){
    cin>> x >> y >> z;
    sum_x+=x;
    sum_y+=y;
    sum_z+=z;
  }
  if(sum_x==0 && sum_y==0 && sum_z==0){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
}
