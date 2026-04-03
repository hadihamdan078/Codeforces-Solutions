//https://codeforces.com/problemset/problem/1374/C
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
    int tot=n;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<n;++i){
        if(s[i]=='('){
            for(int j=i+1;j<n;++j){
                if(s[j]==')'){
                    s.erase(j,1);
                    n--;
                    sum++;
                    break;
                }
            }
        }
    }
    
    cout<<(tot/2)-sum<<"\n";
  }
}
