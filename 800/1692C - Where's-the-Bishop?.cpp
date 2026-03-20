//https://codeforces.com/problemset/problem/1692/C
#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t;
  while(t--){
    vector<string>arr(8);
    for(int i=0;i<8;++i){
      cin>>arr[i];
    }
    int row=-1;
    int column=0;
    for(int i=0;i<8;++i){
      for(int j=0;j<8;++j){
        if(j+2<8 && arr[i][j]=='#' && arr[i][j+2]=='#'){ 
          row=i;
          column=j;
          break;
        }
      }
      if(row!=-1){
        break;
      }
    }
    cout<<row+2<<" "<<column+2<<"\n";  //the bishop's centre is located at (row+2 , coiumn+2)
                                      // based on the pattern found in the preceding rows
  } 
}
