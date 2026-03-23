//https://codeforces.com/problemset/problem/1926/B
#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<string>arr(n);
      for(int i=0;i<n;++i){
        cin>>arr[i];
      }
      int tot_1=0;
      int tot_2=0;
      int index=0;
      for(int i=0;i<n;++i){
        int sum=0;
        for(int j=0;j<n;++j){
          if(arr[i][j]=='1'){
            sum++;
          }         
        }
        if(sum!=0) index++;
        if(index==1){
          tot_1=sum;
        }else if(index==2){
          tot_2=sum;
          break;
        }
      }
      if(tot_1==tot_2){
        cout<<"SQUARE\n";
      }else{
        cout<<"TRIANGLE\n";
      }
    }
}
