//https://codeforces.com/problemset/problem/1850/C
#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        char c;
        vector<char>arr;
        for(int i=1;i<=8;++i){
            for(int j=1;j<=8;++j){
                cin>>c;
                if(c!='.'){
                    arr.push_back(c);
                }
            }
        }
        for(char x:arr){
            cout<<x;
        }
        cout<<"\n";
    }
}
