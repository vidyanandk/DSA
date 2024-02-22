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
        if(a==b){
            if(a%2!=0) cout<<"NO\n";
            else cout<<"YES\n";
        } else {
            if(a%2!=0 && b%2!=0) cout<<"NO\n";
            else if(a%2!=0){
                if(b/2!=a) cout<<"YES\n";
                else cout<<"NO\n";
            }else if(b%2!=0){
                if(a/2==b) cout<<"NO\n";
                else cout<<"YES\n";
            }else{
               cout<<"YES\n";
            }
        } 
    }
    return 0;
}