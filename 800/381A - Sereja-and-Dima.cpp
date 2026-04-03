//https://codeforces.com/problemset/problem/381/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n;
  cin>>n;
  vector<int>arr(n);
  for(int i=0;i<n;++i){
    cin>>arr[i];
  }
  string player_now="sereja";
  int i=0;
  int j=n-1;
  int point_sereja=0;
  int point_dima=0;
  while(i<=j){
    if(player_now=="sereja"){
        point_sereja+=max(arr[i],arr[j]);
        if(arr[i]<arr[j]){
            j--;
        }else{
            i++;
        }
        player_now="dima";
    }else if(player_now=="dima"){
        point_dima+=max(arr[i],arr[j]);
        if(arr[i]<arr[j]){
            j--;
        }else{
            i++;
        }
        player_now="sereja";
    }
  }
  cout<<point_sereja<<" "<<point_dima;
  
}
