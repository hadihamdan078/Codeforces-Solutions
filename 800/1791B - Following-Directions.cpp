//https://codeforces.com/problemset/problem/1791/B
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
        string s;
        cin>>s;
        int x=0;    
        int y=0;
        string res="NO";
        for(int i=0;i<n;++i){
            if(s[i]=='L'){
                x-=1;
            }else if(s[i]=='R'){
                x+=1;
            }else if(s[i]=='U'){
                y+=1;
            }else if(s[i]=='D'){
                y-=1;
            }
            if(x==1 && y==1){
                res="YES";
                break;
            }
        }
        cout<<res<<"\n";
    }
}
