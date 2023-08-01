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
        int a;
        cin>>a;
        vector<int>temp(a);
        int b;
        cin>>b;
        temp[0]=b;
        int mini=INT_MAX;
        for(int i=1;i<a;i++){
             int x;
             cin>>x;
             temp[i]=x;
             mini=min(mini,temp[i]-temp[i-1]);
        }
        if(mini<0) cout<<0<<endl;
        else cout<<(mini/2)+1<<endl;
        
    }
    return 0;
}