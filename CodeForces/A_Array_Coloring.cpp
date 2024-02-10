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
        int n;
        cin>>n;
        int sum=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            sum+=a;
        }
        if(sum%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}