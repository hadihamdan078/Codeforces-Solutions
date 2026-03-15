//https://codeforces.com/problemset/problem/1788/A
#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        vector<int>arr;
        int two=0;
        for(int i=0;i<n;++i){
            cin>>a;
            if(a==2){
                two++;
            }
            arr.push_back(a);
        }
        if(two%2==1){
            cout<<-1<<"\n";
        }else{
            int sum=0;
            for(int i=0;i<arr.size();++i){
                if(arr[i]==2){
                    sum+=2;
                }
                if(sum==two){
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
    }
}
