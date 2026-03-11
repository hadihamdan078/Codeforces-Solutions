//https://codeforces.com/problemset/problem/1722/A
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    string orginal="Timur";
    sort(orginal.begin(),orginal.end());
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s.size()!=5){
            cout<<"no\n";
        }else{
            sort(s.begin(),s.end());
            if(s==orginal) cout<<"yes\n";
            else cout<<"no\n";
        }
    }
    return 0;
}
