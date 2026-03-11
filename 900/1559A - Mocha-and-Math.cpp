//https://codeforces.com/problemset/problem/1559/A
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        int mini;
        cin>>mini;
        for(int i=1;i<n;++i){
            cin>>a;
            mini &=a;
        }
        cout<<mini<<"\n";
    }
}
