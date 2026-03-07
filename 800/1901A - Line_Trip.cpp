//https://codeforces.com/problemset/problem/1901/A
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n , x;
    cin>>n >> x;
    vector<int>arr;
    int a;
    int sub=0;
  
    for(int i=0;i<n;++i){
      cin>>a;
      arr.push_back(a);
    }
    int min=0;
    for(int i=0;i<n;++i){
      if(arr[i]-min>sub){
        sub=arr[i]-min;
      }
      min=arr[i];
    }
    if(n==1){
      if(abs((x-arr[0])*2)<arr[0]){
        cout<<arr[0]<<"\n";
      }else{
        cout<<abs((x-arr[0])*2)<<"\n";
      }
    }else{
    
      int sum=abs(x-arr[n-1]);

      if(sum*2>sub){
        cout<<sum*2<<"\n";
      }else{
        cout<<sub<<"\n";
      }
    }
  }
}
