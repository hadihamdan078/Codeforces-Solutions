//https://codeforces.com/problemset/problem/1996/B
#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n , k;
      cin >> n >>k;
      string s;
      
      vector<string>arr(n);
      for(int i=0;i<n;++i){
        cin>>arr[i];
      }
      for(int i=0;i<n;i+=k){
        for(int j=0;j<n;j+=k){
          cout<<arr[i][j];
        }
        cout<<"\n";
      }
      
    }
}
