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
         int x=0;
         int cnt=0;
         for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a<0) x++;
            if(a==0) cnt++;
         } 
         if(x%2==0){
            if(cnt==0)
            {cout<<1<<endl;
             cout<<1<<" "<<0<<endl;
            }
            else{
                cout<<0<<endl;
            }
         }
         else{
               cout<<0<<endl;
         }
    }
    return 0;
}