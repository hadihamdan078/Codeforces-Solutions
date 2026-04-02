//https://codeforces.com/problemset/problem/122/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n;
  cin>>n;
  string res="NO";
  int arr[12]={4,7,47,74,444,447,474,744,477,747,774,777};
  for(int i=0;i<12;++i){
    if(n%arr[i]==0){
        res="YES";
        break;
    }
  }
  cout<<res;
}
