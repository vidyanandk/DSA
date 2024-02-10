#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

// map<char,int>mpp;
// for(int i=97;i<=122;i++){
//     char c=to_string(i);
//     mpp[c]++;
// }

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        int flag = 0;
        string t = "";
        for (int i = 0; i < n; i++)
        {
            if (a[i] != c[i] && c[i]!=b[i])
            {
               flag=1;
               break;
            }
            
        }
       
        
        if (flag == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
