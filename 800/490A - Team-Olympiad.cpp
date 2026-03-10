//https://codeforces.com/problemset/problem/490/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>arr;
  int a;
  int sum1=0;
  int sum2=0;
  int sum3=0;
  vector<int>one;
  vector<int>two;
  vector<int>three;
  for(int i=0;i<n;++i){
    cin>>a;
    if(a==1){
      one.push_back(i+1);
      sum1++;
    }else if(a==2){
      two.push_back(i+1);
      sum2++;
    }else{
      three.push_back(i+1);
      sum3++;
    }
  }
  int w=min(sum1,min(sum2,sum3));
  cout<<w<<"\n";
  for(int j=0;j<w;++j){
    cout<<one[j]<<" "<<two[j]<<" "<<three[j];
    cout<<"\n";
  }
}
