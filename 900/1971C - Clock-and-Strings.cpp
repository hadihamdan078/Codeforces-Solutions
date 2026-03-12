//https://codeforces.com/problemset/problem/1971/C
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arr[12]={1,2,3,4,5,6,7,8,9,10,11,12};
        int a , b , c, d;
        cin>>a >> b >> c >>d;
        int small=min(a,b);
        int big=max(a,b);
        int sum=0;
        for(int i=small-1;i<big;++i){
            if(arr[i]==c){
                sum++;
            }else if(arr[i]==d){
                sum++;
            } 
        }
        
        if(sum==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
        
}
