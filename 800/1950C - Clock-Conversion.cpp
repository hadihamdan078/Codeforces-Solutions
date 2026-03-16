//https://codeforces.com/problemset/problem/1950/C
#include<iostream>
#include<string>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;      
      int hour=stoi(s.substr(0,2));
      string min=s.substr(2,3);
      string day;
      if(hour>=12){
         day=" PM";
         hour-=12;
      }else{
         day=" AM";
      }
      if(hour==0){
         cout<<12<<min<<day<<"\n";
      }else if(hour<10){
         cout<<"0"<<hour<<min<<day<<"\n";
      }else{
         cout<<hour<<min<<day<<"\n";
      }
    }  
}
