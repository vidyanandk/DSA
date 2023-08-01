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
        ll n, c;
        cin >> n >> c;
        ll w;
        ll sq=0;
        ll sm=0;
        for(int i=0;i<n;i++){
          ll h;
          cin>>h;
          sq+=h*h;
          sm+=h;
        }

        ll  f=(-sm)+sqrt((sm*sm)+(n*(c-sq)));
        ll y=2*n;
        ll b=f/y;
        cout<<b<<endl;
    }
    return 0;
}