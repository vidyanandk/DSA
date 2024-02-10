
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long LL;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int ans=0;
        size_t found=x.find(s);
        if (found != string::npos) cout<< ans<<endl;
        else { int y=10;
        int f=1;
        while(y--){
               ans++;
               x+=x;
               size_t found=x.find(s);
               if (found != string::npos){ cout<<ans<<endl; f=0;break; }
        }
         if(f==1) cout<<-1<<endl;
        }
    }
     
    return 0;
}
