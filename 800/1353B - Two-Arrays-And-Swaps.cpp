//https://codeforces.com/problemset/problem/1353/B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n ,k;
        cin>>n >> k;
        vector<int>arr1;
        vector<int>arr2;
        int a;
        for(int i=0;i<n;++i){
            cin>>a;
            arr1.push_back(a);
        }
        for(int j=0;j<n;++j){
            cin>>a;
            arr2.push_back(a);
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end(),greater<int>());
        for(int i=0;i<k;++i){
            if(arr2[i]>arr1[i]){
                arr1[i]=arr2[i];
            }
        }
        int sum=0;
        for(int x:arr1){
            sum+=x;
        }
        cout<<sum<<"\n";
    }    
}
