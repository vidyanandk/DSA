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
         int x,y,z;
         cin>>x>>y>>z;
         int n=x^y;
         n=n^z;
         cout<<n<<endl;
    }
    return 0;
}