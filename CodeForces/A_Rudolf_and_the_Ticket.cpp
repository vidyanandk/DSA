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
       int n,m,k;
       cin>>n>>m>>k;
       int a[n];
         for(int i=0;i<n;i++)
         {
              cin>>a[i];
         }
         int b[m];
            for(int i=0;i<m;i++)
            {
                cin>>b[i];
            }

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i]+b[j]<=k){
                    ans++;
                }
            }
        }
        cout<< ans<<endl;
    }
    return 0;
}