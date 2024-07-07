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
        cin >> n; // Initialize n
        vector<int> x(n - 1);
        int maxi = 0;
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x[i];
            maxi = max(maxi, x[i]);
        }
        cout << maxi+1 << " ";
        int pre = maxi+1;
        for (int i = 1; i < n; i++)
        {
            cout << x[i - 1] + pre << " ";
            pre += x[i - 1];
        }
        cout << endl;
    }
    return 0;
}
