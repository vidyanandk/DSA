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
          int n,x,y;
          cin>>n>>x>>y;
          vector<int>temp(n);
          for(int i=0;i<n;i++){
            cin>>temp[i];
          }
          int cnt=0;
          for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if((temp[i]+temp[j])%x==0 && (temp[i]-temp[j])%y==0) cnt++;
            }
          }
          cout<<cnt<<endl;
    }
    return 0;
}