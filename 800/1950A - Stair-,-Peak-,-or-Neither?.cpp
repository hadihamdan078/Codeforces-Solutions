//https://codeforces.com/problemset/problem/1950/A
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a , b , c;
        cin>>a >> b >>c;
        if(b>a && b>c){
             cout<<"PEAK\n";
        }else if(b>a && b<c){
            cout<<"STAIR\n";
        }else{
            cout<<"NONE\n";
        }
    }
}
