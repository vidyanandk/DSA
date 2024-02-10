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
        int st=0;
        int f=0;
        int end=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){
               if(f==0){
                 st=i;
                 f=1;
               }
               end=i;
            }
        }
        cout<<end-st+1<<endl;
    }
    return 0;
}