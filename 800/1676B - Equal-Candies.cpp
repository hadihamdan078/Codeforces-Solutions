//https://codeforces.com/problemset/problem/1676/B
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
        int a;
        vector<int>arr;
        for(int i=0;i<n;++i){
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        int sum=0;
        int basic=arr[0];
        for(int i=0;i<n;++i){
            sum+=arr[i]-basic;
        }
        cout<<sum<<"\n";
    }
        
}
