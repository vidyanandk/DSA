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
        float x;
        if(a>b) x=(float(a+b)/2)-b;
        else{
            x=(float(a+b)/2)-a;
        }
        cout<<ceil(x/c)<<endl;
    }
    return 0;
}