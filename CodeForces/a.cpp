
#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long LL;

int main()
{
    int num;
    cin >> num;

    while (num>0)
    {
        LL m, k, a, ak;
        cin >> m >> k >> a >> ak;

        if (m <= a)
        {
            cout <<"0"<< endl;
        }
        else if ((m - a) <= ak * k)
        {
            cout << "0" << endl;
        }
        else
        {
            LL t = (m - (ak * k));
            LL s1 = t - a;
            if (s1 > 0 && s1 < k)
            {
                cout << "1" << endl;
            }
            else
            {
                LL s2 = (t - a) / ak;
                LL r = (t - a) % ak;
                cout << s2 + r << endl;
            }
        }
        num--;
    }

    return 0;
}
