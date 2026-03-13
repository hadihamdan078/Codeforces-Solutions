//https://codeforces.com/problemset/problem/26/A
#include<iostream>
#include<vector>
bool prime(int x){
    if(x<=1) return false;
    if(x==2)return true;
    if(x%2==0) return false;
    for(int i=3;i*i<=x;i+=2){
        if(x%i==0) return false;
    }
    return true;
}
using namespace std;
int main(){
       int n;
       cin>>n;
       vector<int>arr;
       for(int i=1;i<=n;++i){
           if(prime(i)){
             arr.push_back(i);
            }
       }
       int sum=0;
       for(int i=1;i<=n;++i){
        int num=0;
        for(int j=0;j<arr.size();++j){
            if(i%arr[j]==0){
                num++;
            }
        }
        if(num==2)sum++;
       }

       cout<<sum;
}
