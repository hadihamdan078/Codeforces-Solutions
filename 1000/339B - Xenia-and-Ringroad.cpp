//https://codeforces.com/problemset/problem/339/B
#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n , m;
  cin>>n >> m;
  vector<int>arr(m);
  for(int i=0;i<m;++i){
    cin>>arr[i];
  }
  int first=1;
   long long sum=0;
  for(int i=0;i<m;++i){
    if(arr[i]>=first){
        sum+=arr[i]-first;
       
    }else{
        sum+=n-first+arr[i];
        
    }
    first=arr[i];
  }
  cout<<sum;
} 
