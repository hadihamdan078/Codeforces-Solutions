//https://codeforces.com/problemset/problem/2009/B
#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char c;
        vector<int>arr;
        for(int i=0;i<n;++i){
            for(int j=0;j<4;++j){
                cin>>c;
                if(c=='#'){
                    arr.push_back(j+1);
                }
            }
        }
        for(int i=n-1;i>=0;--i){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
}
