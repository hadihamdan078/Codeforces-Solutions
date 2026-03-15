//https://codeforces.com/problemset/problem/2167/B
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        string t;
        cin>>s >> t;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }
}
