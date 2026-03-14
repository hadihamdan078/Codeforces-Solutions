//https://codeforces.com/problemset/problem/1915/C
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum=0;
        for(int i=0;i<n;++i){
            long long a;
            cin>>a;
            sum+=a;
        }
        long long res=sqrt(sum);
        if(res*res==sum){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }
}
