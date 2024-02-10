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
         vector<int> temp({a,b,c});
         sort(temp.begin(),temp.end());
         int cnt=0;
         temp[1]-=temp[0];
         temp[2]-=temp[0];
         if(temp[1]%temp[0]==0 &&temp[2]%temp[0]==0) {cnt+=temp[1]/temp[0]+temp[2]/temp[0];if(cnt<=3) cout<<"YES\n";
         else cout<<"NO\n";}
         else{
            cout<<"NO\n";
         }
    }
    return 0;
}