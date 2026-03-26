//https://codeforces.com/problemset/problem/320/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  string n;
  cin>>n;
  string m= "";
  for(int i=0;i<n.size();++i){
    if(i+2<n.size() && n[i]=='1' && n[i+1]=='4' && n[i+2]=='4'){
      i+=2;
    }else if(i+1<n.size() && n[i]=='1' && n[i+1]=='4'){
      i+=1;
    }else if(n[i]=='1'){
      continue;
    }else{
      m+=n[i];
    }
  }
  if(m.size()==0){
    cout<<"YES\n";
  }else{
    cout<<"NO\n";
  }
}
