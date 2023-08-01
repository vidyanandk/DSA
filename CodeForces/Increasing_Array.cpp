#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long ans=0;
    int a;
    cin>>a;
    for(int i=2;i<=n;i++){
        int b;
        cin>>b;
        if(a>b){ ans+=abs(a-b); }
        else a=b;
    }
    cout<<ans;
    return 0;
}