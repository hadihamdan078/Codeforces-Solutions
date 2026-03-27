//https://codeforces.com/problemset/problem/1881/A
#include<iostream>
#include<string>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int t;
  cin>>t;
  while(t--){
    int n , m;
    cin>>n >> m;
    string x;
    cin>>x;
    string s;
    cin>>s;
    int sum=0;
    int res=-1;
    for(int i=0;i<6;++i){
      if(x.find(s)==string::npos){
        x+=x;
        sum++;
      }else{
        res=sum;
        break;
      }
    } 
    cout<<res<<"\n";
  }
}
