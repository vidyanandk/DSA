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
        int n,m;
        cin>>n>>m;
        string a,b;
        cin>>a;
        cin>>b;
        int ans=0;
        int j=0;
        for(int i=0;i<n;i++){
            while(j<m){
                if(a[i]==b[j]){
                    j++;
                    ans=i+1;
                    break;
                }else
                j++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}