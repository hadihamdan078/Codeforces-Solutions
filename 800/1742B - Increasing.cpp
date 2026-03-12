//https://codeforces.com/problemset/problem/1742/B
#include<iostream>
#include<set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        set<int>arr;
        for(int i=0;i<n;++i){
            cin>>a;
            arr.insert(a);
        }
        if(arr.size()==n){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }
        
}
