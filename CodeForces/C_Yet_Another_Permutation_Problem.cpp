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
        cin >> n;
        map<int, int> mpp;
        for (int i = 2; i <= n; i++)
        {
            mpp[i] = i;
        }
        cout << 1 
             << " ";
        while (!mpp.empty())
        {
            auto it = mpp.begin();
            int x = it->second;
            cout << x << " ";
            mpp.erase(x);
            while (x * 2 <= n)
            {
                cout << x * 2 << " ";
                mpp.erase(x * 2);
                x = x * 2;
            }
        }

        cout << endl;
    }
    return 0;
}