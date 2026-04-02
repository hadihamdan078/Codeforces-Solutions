//https://codeforces.com/problemset/problem/131/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  string s;
  cin>>s;
  string res="";
  int sum=0;
  if(s[0]>=97){
     res=s[0]-32;
    for(int i=1;i<s.size();++i){
        if(s[i]<97){
            res+=s[i]+32;
        }else{
            cout<<s;
            sum++;
            break;
        }
    }
  }else if(s[0]<97){
    res=s[0]+32;
    for(int i=1;i<s.size();++i){
        if(s[i]<97){
            res+=s[i]+32;
        }else{
            cout<<s;
            sum++;
            break;
        }
    }
  }
   if(sum==0){
    cout<<res;
   }
} 
