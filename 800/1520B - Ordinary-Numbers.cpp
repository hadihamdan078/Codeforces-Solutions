//https://codeforces.com/problemset/problem/1520/B
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        for(int i=1;i<=9;++i){
            long long num=i;
            while(num<=n){
                sum++;
                num=num*10+i;
            }
        }
        cout<<sum<<"\n";
    }
}
