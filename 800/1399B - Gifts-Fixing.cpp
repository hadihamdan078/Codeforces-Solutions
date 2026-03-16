//https://codeforces.com/problemset/problem/1399/B
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
      vector<int>arr(n);
      vector<int>brr(n);
   
      for(int i=0;i<n;++i){
         cin>>arr[i];
      }
      auto smallest1=min_element(arr.begin(),arr.end());
      int min_arr=*smallest1;
      
      for(int i=0;i<n;++i){
         cin>>brr[i];
      }
      auto smallest2=min_element(brr.begin(),brr.end());
      int min_brr=*smallest2;
      long long sum=0;
      for(int i=0;i<n;++i){
         int sub1=arr[i]-min_arr;
         int sub2=brr[i]-min_brr;
         sum+=max(sub1,sub2);
      }
      cout<<sum<<"\n";
    }  
}
