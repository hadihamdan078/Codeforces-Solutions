//https://codeforces.com/problemset/problem/1360/B
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
        int min_arr=1000;
        for(int i=0;i<arr.size()-1;++i){
            if(arr[i+1]-arr[i]<min_arr){
                min_arr=arr[i+1]-arr[i];
            }
        }
        cout<<min_arr<<"\n";
    }
}
