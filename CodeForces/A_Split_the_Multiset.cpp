#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n,k;
        cin >> n >> k;
        if(n==1) {cout<<0<<endl; continue;}
        int ans=0;
        ans++;
        int r=n%k;
        int d=n/k;
        ans+=d;
        if(r!=0){
            ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}