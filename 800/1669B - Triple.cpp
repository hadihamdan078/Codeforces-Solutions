//https://codeforces.com/problemset/problem/1669/B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr;
        int a;
        for(int i=0;i<n;++i){
            cin>>a;
            arr.push_back(a);
        }
        int res=-1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-2;++i){
            if(arr[i]==arr[i+1] && arr[i]==arr[i+2]){
                res=arr[i];
                break;
            }
        }
        cout<<res<<"\n";
    }
}
