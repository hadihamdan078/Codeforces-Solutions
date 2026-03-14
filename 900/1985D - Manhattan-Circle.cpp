//https://codeforces.com/problemset/problem/1985/D
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n >> m;
        int coulm=0;
        int row=0;
        
        int max=0;
        char c;
        for(int i=1;i<=n;++i){
            int num=0;
            for(int j=1;j<=m;++j){
                cin>>c;
                if(c=='#'){
                    coulm=j;
                    num++;
                }
            }
            if(num>max){
                max=num;
                row=i;
            }
        }
        cout<<row<<" "<<coulm<<"\n";
       
    }
}
