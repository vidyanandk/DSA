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
        int a=s.size();
        if(s[0]<=s[a-1]){
            cout<<s<<endl;
        } 
        else{
            string x=s;
            reverse(x.begin(),x.end());
            x+=s;
            cout<<x<<endl;
        } 
    }
    return 0;
}