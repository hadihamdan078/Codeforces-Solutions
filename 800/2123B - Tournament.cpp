//https://codeforces.com/problemset/problem/2123/B
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
      int n , j ,k;
      cin>>n >> j >>k;
      int a;
      int player_j=0;
      int max_val=0;
      for(int i=0;i<n;++i){
        cin>>a;
        if(i==(j-1)){
          player_j=a;
        }
        if(a>max_val) max_val=a;
      }
      

      if(player_j!=max_val && k==1){
        cout<<"NO\n";
      
      }else{
        cout<<"YES\n";
      }
  }
}
