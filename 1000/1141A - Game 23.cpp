//https://codeforces.com/problemset/problem/1141/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  long long n, m;
  cin>>n >> m;
  if(m%n!=0){
    cout<<-1;
  }else{
    long long div=m/n;
    int sum=0;
    while(div%2==0 || div%3==0){
       if(div%3==0){
           div/=3;
           sum++;
        }else if(div%2==0){
            div/=2;
            sum++;
        
        }
  }
  if(div==1){
    cout<<sum;
  }else{
    cout<<-1;
  }
  } 
}
