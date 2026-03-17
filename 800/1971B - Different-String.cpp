//https://codeforces.com/problemset/problem/1971/B
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;
      int size_s=s.size();
      int sum=1;
      for(int i=0;i<size_s-1;++i){
        if(s[i]==s[i+1]){
          sum++;
        }else{
          char c=s[i];
         s[i]=s[i+1];
         s[i+1]=c;
        }
      }    
      if(sum==size_s){
        cout<<"no\n";
      }else{
        cout<<"yes\n";
        cout<<s<<"\n";
      }
    }  
}
