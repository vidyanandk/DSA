#include <iostream>
#include <string>
using namespace std;

#define mod 1000000007
typedef long long ll;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
          int n,k;
          cin>>n>>k;
          string ans="";
          for(int i=0;i<n;i++){
            ans += char(i+'a');
             for(int j=0;j<k;j++){
                if(i==j) continue;
                ans += char(j+'a');
             }
          }
          cout<<ans<<endl;
    }
    return 0;
}
