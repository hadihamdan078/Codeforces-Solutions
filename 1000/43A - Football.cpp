//https://codeforces.com/problemset/problem/43/A
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  int n;
  cin>>n;
  vector<string>arr(n);
  unordered_map<string,int>wordcount;
  for(int i=0;i<n;++i){
    string s;
    cin>>arr[i];
  }
  for(const string& w : arr ){
    wordcount[w]++;
  }
  string word_now;
  int max=0;
  for(auto const& [arr,count]:wordcount){
    if(count>max){
        max=count;
        word_now=arr;
    }
  }
  cout<<word_now;

}
