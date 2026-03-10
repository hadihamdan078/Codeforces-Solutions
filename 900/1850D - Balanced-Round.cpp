//https://codeforces.com/problemset/problem/1850/D
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n >> k;
        int a;
        vector<int>arr;
        for(int i=0;i<n;++i){
            cin>>a;
            arr.push_back(a);
        }
        int size_arr=arr.size();
        sort(arr.begin(),arr.end());
        int sum=0;
        int max=0;
        for(int i=0;i<arr.size()-1;++i){
            if(arr[i+1]-arr[i]<=k){
                sum++;
                if(sum>max){
                   max=sum;
                }
            }else{
                sum=0;
            }
            
        }
        cout<<size_arr-max-1<<"\n";
    }
    return 0;
}
