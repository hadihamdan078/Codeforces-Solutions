//https://codeforces.com/problemset/problem/1472/B
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int one=0;
        int two=0;
        int a;
        for(int i=0;i<n;++i){
            cin>>a;
            if(a==1) one++;
            else two++;
        }
        if(one%2==0 && two%2==0){
            cout<<"yes\n";
        }else if(two%2==1 && one%2==0 && one>0){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }
}
