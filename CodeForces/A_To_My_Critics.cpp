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
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b>=10) cout<<"Yes\n";
        else if(a+c>=10) cout<<"Yes\n";
        else if(c+b>=10) cout<<"Yes\n";
        else cout<<"NO\n";
    }
    return 0;
}