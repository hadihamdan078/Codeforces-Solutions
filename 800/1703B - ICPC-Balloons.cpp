//https://codeforces.com/problemset/problem/1703/B
#include<iostream>
#include<set>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int size_s=s.size();
    set<char>arr;
    for(int x:s){
      arr.insert(x);
    }
    int size_arr=arr.size();
    int sum=size_arr*2+(size_s-size_arr);
    cout<<sum<<"\n";

  }
}
