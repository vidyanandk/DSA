#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

int fun(int i,int n,int m,int k,string &s,vector<int>&dp)
{
   if(i>=n+1) return true;
   if(n<k) return true;
   if(s[i]=='C') return false;

    if(dp[i]!=-1) return dp[i];

    int f1=0,f2=0;
    if(s[i]=='L'){
       f1=fun(i+m,n,m,k,s,dp);
    }
    
    if(k>0 && s[i]=='W')
    f2=fun(i+1,n,m,k-1,s,dp);

    return dp[i]=f1||f2;
}
int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        string s;
        cin>>s;
        s='L'+s;
        vector<int>dp(n+1,-1);
        int ans=fun(0,n,m,k,s,dp);
        if(ans==1)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}