#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int solve(set<int>st,int N)
{
   int k=*st.begin();
    int ans=0;
    while(k<=N/2 && !st.empty())
    {
        for(int i=k;i<=N;i+=k)
        {
           if(st.find(i)==st.end())
           {
               st.insert(i);
           }
           else
           {
              st.erase(i);
           }
        }
        k=*st.begin();
        ans++;
    }
    ans+=(int)st.size();
    return ans;
   // cout<<ans<<endl; 
}
int main (){
#ifndef ONLINE_JUDGE
freopen("input.txt","r", stdin);
freopen("output.txt","w", stdout);
#endif
int t,t1;

cin>>t;
t1=t;
int i=1;
while(t--)
{
    int n,q;
    cin>>n;
    string s;
    cin>>s;
    map<int,int>m;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int k1;
        cin>>k1;
        m[k1]++;
    }
    for(auto i: m)
    {
        int k=i.first;
        int c=i.second;
         for(int j=k;j<=n;j+=k)
         {
            if(c%2!=0)
            {
                if(s[j-1]=='0')
                {
                     s[j-1]='1';
                }
                else
                {
                     s[j-1]='0';
                }
            }
         }
    }
    set<int>st,st1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            st.insert(i+1);
        }
        else{
            st1.insert(i+1); 
        }
    }
    
   // cout<<s<<endl;
    int k4=solve(st,n);
    int k3=solve(st1,n);
    k3+=1;
    int ans=min(k4,k3);
    cout << "Case #" << i << ": " ;
     cout<<ans<<endl;
     i++;

}
    return 0;
}