//https://codeforces.com/problemset/problem/1367/B
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        int res=-1;
        vector<int>arr;
        int even=0;
        int odd=0;
        for(int i=0;i<n;++i){
            cin>>a;
            if(a%2==0){
                even++;
            }else{
                odd++;
            }
            arr.push_back(a);
        }
        int sum=0;
        for(int i=0;i<n;++i){
            if(i%2==0 && arr[i]%2!=0){
                sum++;
            }
        }
        if(n%2==0 && odd==even){
            res=sum;
        }else if(n%2==1 && even-odd==1){
            res=sum;
        }
        cout<<res<<"\n";
    }
        
}
