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
          int n,m;
          cin>>n>>m;
          vector<int>temp(n);
        //   long long mul=1;
          for(int i=0;i<n;i++){
            cin>>temp[i];
            // mul=(mul*temp[i])%m;
          }
          string s;
          cin>>s;
          int i=0,j=n-1;
          int k=0;
          while(i<=j && k<n){
            int l=i,r=j;
            long long mul=1;
            while(l<=r){
              mul=(mul*temp[l])%m;
              l++;
            }
            cout<<mul%m<<" ";
             if(s[k]=='L'){
                // mul=(mul/temp[i]);
                i++;
             }else{
                // mul=(mul*temp[j]);
                j--;
             }
             k++;
            //  cout<<mul<<endl;
          }
          cout<<endl;

    }
    return 0;
}