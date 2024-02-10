#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

// long long fact(int x){
//     long long t=1;
//     while(x!=1){
//         t*=x;
//         x--;
//     }
//     return t;
// }

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
          int n;
          cin>>n;
          map<int,int>mpp;
          vector<int>temp(n);
          for(int i=0;i<n;i++){
            cin>>temp[i];
             mpp[temp[i]]++;
          }
          long long ans=0;
          int s=mpp.size();
          for(auto it:mpp){
              if(it.second>=3){
                 long long x=it.second*(it.second-1)*(it.second-2);
                 ans+=(x/6);
              }
              if(it.second>=2){
                long long x=it.second*(it.second-1);
                 ans+=(x/2)*(n-it.second);
              }
          }
          cout<<ans<<endl;
    }
    return 0;
}