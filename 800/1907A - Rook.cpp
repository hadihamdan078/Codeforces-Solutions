//https://codeforces.com/problemset/problem/1907/A
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    string row="12345678";
    string coulmn="abcdefgh";
    while(t--){
      string pos;
      cin>>pos;
      for(int i=0;i<8;++i){ 
        if(row[i]!=pos[1]){
          cout<<pos[0];
          cout<<row[i]<<"\n";
        }
      }
      for(int j=0;j<8;++j){
        if(coulmn[j]!=pos[0]){
          cout<<coulmn[j];
          cout<<pos[1]<<"\n";
        }
      }
    }
}
