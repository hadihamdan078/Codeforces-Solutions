//https://codeforces.com/problemset/problem/1980/B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n , f , k ;
      cin>> n >> f >> k;
      vector<int>arr(n);
      int favorit=0;
      for(int i=0;i<n;++i){
        cin>>arr[i];
        if((i+1)==f){
          favorit=arr[i];
        }
      }
      string res="yes";
      sort(arr.rbegin(),arr.rend());
      for(int i=0;i<n;++i){
        if(i==(k-1)){
          if(arr[i]>favorit){
            res="no";
          }else if(arr[i]<favorit){
            res="yes";
          }else if(i+1<n && arr[i]==favorit && arr[i+1]==favorit){
            res="maybe";
          }else if(i+1<n && arr[i]==favorit && arr[i+1]!=favorit){
            res="yes";
          }
        }
      }
      cout<<res<<"\n";
    }
}
