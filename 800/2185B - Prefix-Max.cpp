//https://codeforces.com/problemset/problem/2185/B
#include<iostream>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      int a;
      cin>>a;
      int max=a;
      for(int i=1;i<n;++i){
        cin>>a;
        if(a>max) max=a;
      }
      cout<<max*n<<"\n";
    }
}
