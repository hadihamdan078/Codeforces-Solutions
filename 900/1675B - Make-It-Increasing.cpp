//https://codeforces.com/problemset/problem/1675/B
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>arr;
        long long a;
        for(int i=0;i<n;++i){
            cin>>a;
            arr.push_back(a);
        }
        int res=0;
        int count=1;
        for(int i=n-2;i>=0;--i){
            while(arr[i]>=arr[i+1] && arr[i]>0){
                arr[i]/=2;
                res=count++;
                
            }
            if(arr[i]==arr[i+1] && arr[i]==0){
                res=-1;
                
            }
        }
        cout<<res<<"\n";
    }
}
