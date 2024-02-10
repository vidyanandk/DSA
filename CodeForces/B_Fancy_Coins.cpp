// #include <bits/stdc++.h>
// using namespace std;

// #define mod 1000000007
// typedef long long ll;

// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         ll m,k,a,ak;
//         cin>>m>>k>>a>>ak;
//         if(m<=a) cout<<0<<endl;
//         else if((m-a)<=ak*k)cout<<0<<endl;
//         else{
//             ll t=(m-(ak*k));
//             ll s1=t-a;
//             if(s1>0&&s1<k) cout<<1<<endl;
//             else
//            { ll s2=(t-a)/ak;
//              ll r=(t-a)%ak;
//             cout<<s2+r<<endl;}
//         }
//     }
//     return 0;
// }









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
            cout <<0<< endl;
        }
        else if ((m - a) <= ak * k)
        {
            cout << 0 << endl;
        }
        else
        {
            LL t = (m - (ak * k));
            LL s1 = t - a;
            if (s1 > 0 && s1 < k)
            {
                cout << 1 << endl;
            }
            else
            {
                LL s2 = (t - a) / k;
                LL r = (t - a) % k;
                cout << s2 + r << endl;
            }
        }num--;
    }

    return 0;
}
