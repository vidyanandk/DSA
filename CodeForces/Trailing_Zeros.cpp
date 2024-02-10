#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long f=5; int ans=0;
    while(n/f!=0){
        ans+=floor((double)n/f);
        f=f*5;
    }
    cout<<ans;
    return 0;
}