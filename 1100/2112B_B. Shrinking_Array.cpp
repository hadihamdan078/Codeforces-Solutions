//https://codeforces.com/contest/2112/problem/B
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<unordered_map>
#include<algorithm>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int > arr(n);
    for(int i=0 ; i< n ; ++i)
    {
        cin>>arr[i];
    }
    int pos=1e9;
    for(int i=0 ; i<n ; ++i)
    {
        int sum=0;
        bool check=false;
        for(int j=i+1 ; j<n ; ++j)
        {
            sum++;
            if(abs(arr[i]-arr[j])<=1)
            {
                pos=min(pos, sum);
                break;
            }
        }
    }
    for(int i=0 ; i<n ; ++i)
    {
        if(i+2<n && arr[i]>=min(arr[i+1], arr[i+2])
        && arr[i]<=max(arr[i+1], arr[i+2])) {
        pos=min(pos, 2);
        }
    }
    for(int i=n-1 ; i>=0 ; --i)
    {
        if(i-2>=0 && arr[i]>=min(arr[i-1], arr[i-2])
        && arr[i]<=max(arr[i-1], arr[i-2])) {
        pos=min(pos, 2);
        }
    }
    if(pos==1e9)
    {
        cout<<-1<<'\n';
    }
    else
    {
        cout<<pos-1<<'\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
