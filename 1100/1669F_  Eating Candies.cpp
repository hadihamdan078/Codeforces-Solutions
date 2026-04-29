//https://codeforces.com/problemset/problem/1669/F
#include<iostream>
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
    int left=arr[0];
    int rihgt=arr[n-1];
    int res=0;
    int i=0;
    int j=n-1;
    while(i<j){
      if(left==rihgt){
        res=i+1+n-j;
        i++;
        j--;
        left+=arr[i];
        rihgt+=arr[j];
       
      }else if(left>rihgt){
        j--;
        rihgt+=arr[j];
         
      }else{
        i++;
        left+=arr[i];
         
      }
    }
    cout<<res<<"\n";
  }
}      
