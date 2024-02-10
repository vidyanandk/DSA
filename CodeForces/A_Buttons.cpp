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
        if(a==b){
            if(c%2==0) cout<<"Second\n";
            else cout<<"First\n";
        }
        else if(a>b) cout<<"First\n";
        else cout<<"Second\n";
    }
    return 0;
}