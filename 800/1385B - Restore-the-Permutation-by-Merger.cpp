//https://codeforces.com/problemset/problem/1385/B
#include<iostream>
#include<set>
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
    vector<int>arr;
    set<int>check;
    int a;
    for(int i=0;i<2*n;++i){
      cin>>a;
      if(check.find(a)==check.end()){
        check.insert(a);  
        arr.push_back(a); 
      }
    }
    for(int x:arr){
      cout<<x<<" ";
    }
    cout<<"\n";
  } 
}
