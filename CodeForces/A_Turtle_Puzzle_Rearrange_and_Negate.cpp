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
            vector<int> a(n);
            int sum=0;
            for(auto &it:a) {
                cin>>it;
                sum+=abs(it);
            }
             cout<<sum<<endl;
           


    }
    return 0;
}