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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i=0;i<n;i++)
        { 
            int x;

            cin >> x;
            a[i]=x;
        }
        sort(a.begin(), a.end());
        int j = 0, i, rest = INT_MIN;
        for (i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > k)
            {
                rest = max(rest, i - j + 1);
                j = i + 1;
            }
        }
        rest = max(rest, i - j + 1);
        cout << (n - rest) << endl;
    }
    return 0;
}