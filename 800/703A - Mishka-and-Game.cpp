//https://codeforces.com/problemset/problem/703/A
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m , c;
    int mishk=0;
    int chris=0;
    for(int i=1;i<=n;++i){
        cin>> m >> c;
        if(m>c){
            mishk++;
        }else if(c>m){
            chris++;
        } 
    }
    if(mishk>chris){
        cout<<"Mishka";
    }else if(chris>mishk){
        cout<<"Chris";
    }else{
        cout<<"Friendship is magic!^^";
    }
}
