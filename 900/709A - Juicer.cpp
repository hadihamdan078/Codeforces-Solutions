#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n , b , d;
   cin>>n >> b >> d;
    long long sum=0;
   int a;
   int count=0;
   for(int i=1;i<=n;++i){
    cin>>a;
    if(a<=b) sum+=a;
    if(sum>d){
      count++;
      sum=0;
    }
   }
   cout<<count;
}
#include<iostream>
using namespace std;
int main(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int n , b , d;
   cin>>n >> b >> d;
    long long sum=0;
   int a;
   int count=0;
   for(int i=1;i<=n;++i){
    cin>>a;
    if(a<=b) sum+=a;
    if(sum>d){
      count++;
      sum=0;
    }
   }
   cout<<count;
}
