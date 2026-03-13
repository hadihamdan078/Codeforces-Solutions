//https://codeforces.com/problemset/problem/1985/B
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int max_mul=0;
        int res=0;
        for(int i=2;i<=n;++i){
            int div=n/i;
            if(div>=max_mul){
                max_mul=div;
                res=i;
            }
        }
        cout<<res<<"\n";
    }    
}
