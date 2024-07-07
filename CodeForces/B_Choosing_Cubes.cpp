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
        int  n,f,k;
        cin>>n>>f>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int x=v[f-1];
        sort(v.begin(),v.end(),greater<int>());
        int i=0;
        int fl=0;
        while(i<n && k){
            if(x!=v[i]) {k--; i++;}
            else{
                 int cnt=0;
                 while(i<n && x==v[i]){
                     cnt++;
                     i++;
                 }
                 if(cnt>k) {cout<<"MAYBE"<<endl;fl=1; break;}
                 else if(cnt<=k) {
                     cout<<"YES"<<endl;
                     fl=1;
                      break;
                 } 
            }

            if(k==0){
                 cout<<"NO"<<endl;
                 fl=1;
                 break;
            }
            // i++;
        }
        if(fl==0)
        cout<<"YES"<<endl;
    }
    return 0;
}