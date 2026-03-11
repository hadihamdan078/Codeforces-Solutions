//https://codeforces.com/problemset/problem/427/A
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a;
    int crime=0;
    int hired=0;
    for(int i=0;i<n;++i){
        cin>>a;
        if(a==-1){
            int police=hired-1;
            if(police<0) crime++;
            else  hired=police;
        }else{
            hired+=a;
        }
    }
    cout<<crime;
}
