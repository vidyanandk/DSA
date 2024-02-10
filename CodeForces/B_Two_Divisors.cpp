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
          int a,b;
          cin>>a>>b;
          
        //   int maxi=max(a,b);
        //   int mini=min(a,b);
        //   if(maxi%2==0) cout<<maxi*2<<endl;
        //   else{
        //       if(mini==1) cout<<maxi*maxi<<endl;
        //       else{
        //         //   int x=smallestDivisor(mini);
        //         //   int y=smallestDivisor(maxi);
        //         //   if(x==y){
        //         //      cout<<a*b<<endl;
        //         //   }else{

        //         //   }

        //         cout<<a*b<<endl;
        //       }
        //   }
        
        int  ans=(a*b)/__gcd(a,b);

        if(ans==b) cout<<ans*(b/a)<<endl;
        else cout<<ans<<endl;

    }
    return 0;
}