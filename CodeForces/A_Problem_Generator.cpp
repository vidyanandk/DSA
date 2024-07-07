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
        string s;
        cin>>s;
        int c=7;
        map<char,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
        int ans=0;
        for(auto it:mpp){
            if(it.second<m){
                ans+=m-it.second;
            }
        }
        if(mpp.size()<c){
            ans+=(c-mpp.size())*m;
        }
        cout<<ans<<endl;
    }
    return 0;
}