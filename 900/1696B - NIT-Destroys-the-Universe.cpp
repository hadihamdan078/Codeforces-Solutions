//https://codeforces.com/problemset/problem/1696/B
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
      vector<long long>arr(n);
      arr.push_back(0);
      int sum=0;
      for(int i=1;i<=n;++i){
        cin>>arr[i];
      }
      for(int i=0;i<n;++i){
        if(arr[i]==0 && arr[i+1]!=0){
          sum++;
        }
      }
      if(sum==0){
        cout<<0<<"\n";
      }else if(sum==1){
        cout<<1<<"\n";
      }else{
        cout<<2<<"\n";
      }

    }
}
