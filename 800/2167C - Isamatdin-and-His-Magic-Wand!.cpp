//https://codeforces.com/problemset/problem/2167/C
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
      int n;
      cin>>n;
      vector<long long>arr(n);
      int odd=0;
      int even=0;
      for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]%2==0){
          even++;
        }else{
          odd++;
        }
      }
      if(odd!=0 && even!=0){
        sort(arr.begin(),arr.end()); 
      }
      for(int x:arr) cout<<x<<" ";
        cout<<"\n";
  }
}
