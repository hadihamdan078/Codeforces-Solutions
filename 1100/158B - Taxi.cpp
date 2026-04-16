//https://codeforces.com/problemset/problem/158/B
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n;
  cin>>n;
  int sum=0;
  int three=0;
  int two=0;
  int one=0;
  for(int i=1;i<=n;++i){
    int a;
    cin>>a;
    if(a==4){
      sum++;
    }else if(a==3){
      three++;
    }else if(a==2){
      two++;
    }else{
      one++;
    }
  }
  sum+=three;
  
  one-=three;
  sum+=two/2;
  
  two=two%2;
  if(one>=0){
    sum+=(two*2+one)/4;
 
     if((two*2+one)%4!=0){
       sum++;
   
      }
  }else{
    sum+=(two*2)/4;
    if((two*2)%4!=0){
      sum++;
    }
  }
  cout<<sum;
} 
