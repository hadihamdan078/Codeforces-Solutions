//https://codeforces.com/problemset/problem/472/A
#include<iostream>
using namespace std;
bool prime(int x){
 bool check=true;
 if(x<2){
  check=false;
  }else{
   for(int i=2;i*i<=x;i++){
     if (x%i==0){
        check=false;
        break;
      }
   }
  }
  return check;
}
int main(){
  int n;
  cin>>n;
  if(n%2==0){
    int even1=n/2;
    int even2=n/2;
    while(prime(even1) || prime(even2)){
      even1+=1;
      even2-=1;
    }
    cout<<even1<<" "<<even2;
  }else{
    int half_1=(n+1)/2-1;
    int half=(n+1)/2;
    while(prime(half_1) || prime(half)){
      half_1-=1;
      half+=1;
    }
    cout<<half_1<<" "<<half;
  }
}
