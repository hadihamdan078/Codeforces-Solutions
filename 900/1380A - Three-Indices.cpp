//https://codeforces.com/problemset/problem/1380/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int T;
    cin>>T;
    while(T--){
      int n;
      cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;++i){
        cin>>arr[i];
      }
      string res="NO";
      int index_i=0;
      int index_j=0;
      int index_k=0;
      for(int i=0;i<n;++i){
        if(i+1<n && arr[i]<arr[i+1]){
          index_i=i;
          index_j=i+1;
          for(int j=index_j;j<n;++j){
            if(arr[j]<arr[i+1]){
              index_k=j;
              res="YES";
              break;
            }
          }
        }
        if(res=="YES") break;
      }
      if(res=="YES"){
        cout<<res<<"\n"<<index_i+1<<" "<<index_j+1<<" "<<index_k+1<<"\n";
      }else{
        cout<<res<<"\n";
      }

    }
}
