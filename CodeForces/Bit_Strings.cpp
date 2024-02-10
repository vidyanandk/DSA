#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans=1;
    for(int i=1;i<=n;i++) ans*=2;
   // cout<<ans<<endl;
    const long long mod=1000000007;
    int a=ans%mod;
    cout<<a;
    return 0;
}
