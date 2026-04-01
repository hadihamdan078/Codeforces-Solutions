//https://codeforces.com/problemset/problem/58/A
#include<iostream>
#include<unordered_set>
#include<algorithm>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL); 
  string s;
  cin>>s;
  unordered_set<char>arr;
  string copy="";
  for(int i=0;i<s.size();++i){
    if(s[i]=='h' && arr.find(s[i])==arr.end()){
        arr.insert(s[i]);
        copy+=s[i];
    }else if(s[i]=='e' && arr.find(s[i])==arr.end() && copy=="h"){
        arr.insert(s[i]);
        copy+=s[i];
        
    }else if(s[i]=='l'   && (copy=="he" || copy=="hel")){
        
        copy+=s[i];
        
    }else if(s[i]=='o' && arr.find(s[i])==arr.end() && copy=="hell"){
        arr.insert(s[i]);
        copy+=s[i];
    }
  }
  if(copy=="hello"){
    cout<<"YES";
  }else{
    cout<<"NO";
  }
}
