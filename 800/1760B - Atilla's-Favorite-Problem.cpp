//https://codeforces.com/problemset/problem/1760/B
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
        cin>>s;
        sort(s.begin(),s.end());
        int position=s[n-1]-96;
        cout<<position<<"\n";
    }
}
