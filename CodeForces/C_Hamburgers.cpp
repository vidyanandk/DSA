#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

int main()
{
    int tt;
    cin >> tt;
    string s;
    cin>>s;
    int nb,ns,nc;
    cin>>nb>>ns>>nc;
    int pb,ps,pc;
    cin>>pb>>ps>>pc;
    int r;
    cin>>r;
    int ans=0;
    int b,s,c;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B') b++;
        else if(s[i]=='S') s++;
        else c++;
    }
    
    return 0;
}