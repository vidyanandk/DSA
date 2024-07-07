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
        int t;
        cin>>t;
        int ans;
        int maxi=0;
        for(int i=1;i<t;i++){
             int x=__gcd(i,t)+i;
             if(x>maxi){
                ans=i;
             }

        }
        cout<<ans<<endl;
        
    }
    return 0;
}