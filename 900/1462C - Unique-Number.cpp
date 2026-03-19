//https://codeforces.com/problemset/problem/1462/C
#include<iostream>
#include<vector>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int t;
   cin>>t;
   while(t--){
    int x;
    cin>>x;
    vector<int>arr;
    if(x<=9){
      cout<<x<<"\n";
    }else{
      int sum=0;
      for(int i=9;i>0;--i){
        sum+=i;
        arr.push_back(i);
        if(x-sum<i){
          arr.push_back(x-sum);
          break;
        }
      }
      int tot=0;
      for(int i=0;i<arr.size();++i){
        tot+=arr[i];
      }
      if(tot==x){
        for(int i=arr.size()-1;i>=0;--i){
          cout<<arr[i];
        }
        cout<<"\n";
      }else{
        cout<<-1<<"\n";
      }
    } 
  }
}
