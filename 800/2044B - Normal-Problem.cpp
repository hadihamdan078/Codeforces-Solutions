//https://codeforces.com/problemset/problem/2044/B
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        for(int i=a.size()-1;i>=0;--i){
            if(a[i]=='q'){
                cout<<"p";
            }else if(a[i]=='p'){
                cout<<"q";
            }else{
                cout<<a[i];
            }
        }
        cout<<"\n";
    }
}
