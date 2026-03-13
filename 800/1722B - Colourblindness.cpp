//https://codeforces.com/problemset/problem/1722/B
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string row1;
        cin>>row1;
        string row2;
        cin>>row2;
        string res="YES";
        for(int i=0;i<n;++i){
            if(row1[i]=='R' && row2[i]!='R'){
                res="NO";
                break;
            }else if(row2[i]=='R' && row1[i]!='R'){
                res="NO";
                break;
            }
        }
        cout<<res<<"\n";

    }
}
