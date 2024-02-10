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
        int smini=INT_MAX;
        ll sum=0;
        for(int i=0;i<n;i++){
            int s;
            cin>>s;
            vector<int>t(s);
            for(int j=0;j<s;j++){
                cin>>t[j];
            }
            sort(t.begin(),t.end());
            mini=min(mini,t[0]);
            smini=min(smini,t[1]);
            sum+=t[1];
        }
        cout<<sum-smini+mini<<endl;
    }
    return 0;
}