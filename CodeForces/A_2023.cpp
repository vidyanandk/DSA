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
         cin>>n>>k;
         long long mul=1;
         for(int i=0;i<n;i++){
            int a;
            cin>>a;
            mul*=a;
         } 
         if(2023%mul!=0) cout<<"NO\n";
         else{
            cout<<"YES\n";
            int ans=2023/mul;
            cout<<ans<<" ";
            for(int i=1;i<k;i++){
                cout<<1<<" ";
            }
            cout<<endl;
         }
    }
    return 0;
}