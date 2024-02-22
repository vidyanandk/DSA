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
          string s;
          cin>>s;
          int ans=0;
          int i=0;
          while(i<n){
            // if(s[i+1]=='@'){ ans++;i++;}
            // else if(s[i+2]=='@'){
            //     ans++;
            //     i+=2;
            // }else

            // if(s[i+1]=='.') i++;
            // else if(S[i+1]=='*'){
            //     if(s[i+2]=='*') {
            //         break;
            //     }else if(s[i+1]){
                    
            //     }
            // }

            if(s[i]=='.') i++;
            else if(s[i]=='*'){
                if(s[i+1]=='*') break;
                else i++;
            }
            else {
                ans++;i++;
            }
          }
          cout<<ans<<endl;
    }
    return 0;
}