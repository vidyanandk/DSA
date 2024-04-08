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
      if(a<b && b<c) cout<<"STAIR\n";
      else if(a<b && b>c) cout<<"PEAK\n";
      else cout<<"NONE\n";    
    }
    return 0;
}