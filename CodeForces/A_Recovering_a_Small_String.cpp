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
        cin >> a;
        string ans = "";
        for (int i = 1; i <= 26; i++)
        {
            int f1=0;
            for (int j = 1; j <= 26; j++)
            { 
                int f2=0;
                for (int k = 1; k <= 26; k++)
                {
                    if (i + j + k == a)
                    {
                        ans += char(i + 'a' - 1);
                        ans += char(j + 'a' - 1);
                        ans += char(k + 'a' - 1);
                        f2=1;
                        f1=1;
                        break;
                    }
                }
                if(f2) break;
            }
            if(f1) break;
        }
        cout << ans << endl;
    }
    return 0;
}
