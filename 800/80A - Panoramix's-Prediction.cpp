//https://codeforces.com/problemset/problem/80/A
#include<iostream>
#include<vector>
bool prime(int x){
    if(x<2) return false;
    if(x==2) return true;
    if(x%2==0){
        return false;
    }else{
        for(int i=3;i*i<=x;++i){
            if(x%i==0) return false;
        }
        return true;
    }
}
using namespace std;
int main(){
    int n , m;
    cin>>n >>m;
    vector<int>arr;
    for(int i=2;i<=50;++i){
        if(prime(i)) arr.push_back(i);
    }
    string res="NO";
    for(int i=0;i<arr.size()-1;++i){
        if(arr[i]==n && arr[i+1]==m){
            res="YES";
            break;
        }
    }
    cout<<res<<"\n";

}
