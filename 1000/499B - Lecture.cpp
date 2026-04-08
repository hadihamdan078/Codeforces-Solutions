//https://codeforces.com/problemset/problem/499/B
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n , m;
  cin>> n >> m;
  vector<pair<string , string>>arr;
  string a;
  string b;
  for(int i=0;i<m;++i){ 
    cin>>a >> b;
    arr.push_back({a,b});
  }
  string c;
  for(int i=0;i<n;++i){
    cin>>c;
    for(int j=0;j<m;++j){
      if(c==arr[j].first || c==arr[j].second){
        if(arr[j].first.size()<=arr[j].second.size()){
          
          cout<<arr[j].first<<" ";
        }else{
          cout<<arr[j].second<<" ";
        }
      }
    }
  }
}
