//https://codeforces.com/problemset/problem/1850/B
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
        int a , b;
        int max=0;
        int index=0;
        for(int i=1;i<=n;++i){
            cin>> a >>b;
            if(a<=10 && b>max){
                max=b;
                index=i;
            }
        }
        cout<<index<<"\n";
    }
}
