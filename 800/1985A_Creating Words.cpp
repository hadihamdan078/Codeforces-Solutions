//https://codeforces.com/contest/1985/problem/A
#include<iostream>
#include <cmath>
using namespace std;
int main(){
    int t;
        string a,b;
        char c;
        cin>>t;
        for(int i=1;i<=t;++i){
            cin>>a>>b;
            c=a[0];
            a[0]=b[0];
            b[0]=c;
            cout<<a<<"  "<<b<<endl;
        }
 return 0;
