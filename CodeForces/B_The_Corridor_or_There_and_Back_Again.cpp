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
        int mini=INT_MAX;
        for(int i=0;i<n;i++)
        {int a,b;
        cin>>a>>b;
        if(b%2==0)
          mini=min(mini,(a+(b/2-1)));
        else mini=min(mini,(a+(b/2)));
       }
       cout<<mini<<endl;
    }
    return 0;
}