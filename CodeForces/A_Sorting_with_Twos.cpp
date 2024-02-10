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
        vector<int> temp(n);
        for (int i = 0; i < n; i++)
        {
            cin >> temp[i];
        }
        int mini = *min_element(temp.begin(), temp.end());
        int x = log2(n);
        int f = 0;
        int ind = 0;
        int pV=temp[x-1];
        for (int i = 0; i <=x; i++)
        {
            int p = pow(2, i);
            int a = *max_element(temp.begin() + ind, temp.begin() + p-1);
            if (a <= temp[p - 1])
            {
                ind = p;
                // temp[p - 1] = mini;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
        {
            for (int i = pow(2, x)+1; i < n; i++)
            {
                if (temp[i - 1] > temp[i])
                {
                    f = 1;
                    break;
                }
            }
            if (f == 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}
