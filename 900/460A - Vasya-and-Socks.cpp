//https://codeforces.com/problemset/problem/460/A
#include<iostream>
using namespace std;
int main(){
    int n , m;
    cin>>n >> m;
    int res=n/m;
    int total=n+res;
    while(total/m!=res){
        int sum=n+total/m;
        res=sum-n;
        total=sum;
    }
    cout<<total;
    return 0;
}
