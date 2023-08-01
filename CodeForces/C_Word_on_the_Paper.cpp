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
       vector<vector<char>> t;
       int flag=1,a,b;
       for(int i=0;i<8;i++){
        vector<char> c;
        for(int j=0;j<8;j++){
                char d;
                cin>>d;
                c.push_back(d);
                if(d>=97 && d<=122 && flag==1) {
                    a=i;
                    b=j; flag=0;
                }
        }
        t.push_back(c);
       }
       string ans="";
       for(int k=a;k<8;k++){
         if(t[k][b]!='.')
          {ans+=t[k][b];
          }
          else break;
       }
       cout<<ans<<endl;
    }
    return 0;
}
