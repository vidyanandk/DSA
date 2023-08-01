#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

int main()
{
    ll tt;
    cin >> tt;
    while (tt--)
    {
        ll a;
        cin>>a;
        ll cnt=0;
        for(ll i=1;i<=a;i++){
            if(a%i==0) cnt++;
            else break;
        }
        cout<<cnt<<endl;     
    }
    return 0;
}