//https://codeforces.com/problemset/problem/1837/B
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int sum=0;
        int max=0;
        for(int i=0;i<s.size()-1;++i){
            if(s[i]==s[i+1]){
                sum++;
            }else{
                sum=0;
            }
            if(sum>max){
                max=sum;
            }
        }
        cout<<max+2<<"\n";
    }
}
