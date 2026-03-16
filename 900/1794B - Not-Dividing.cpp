//https://codeforces.com/problemset/problem/1794/B
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
      vector<int>arr(n);
      
      for(int i=0;i<n;++i){
         cin>>arr[i];
      }
      for(int i=0;i<n;++i){
         if(arr[i]==1){
            arr[i]+=1;
         }
      }
      for(int i=0;i<n-1;i++){
         if(arr[i+1]%arr[i]==0){
            arr[i+1]+=1;
         }
      }
      for(int x:arr){
         cout<<x<<" ";
      }
      cout<<"\n";
    }  
}
