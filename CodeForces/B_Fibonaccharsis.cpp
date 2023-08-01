#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;
double PHI = 1.6180339;

int f[6] = {0, 1, 1, 2, 3, 5};

int fib(int n)
{
    if (n < 6)
        return f[n];
    int t = 5, fn = 5;
    while (t < n)
    {
        fn = round(fn * PHI);
        t++;
    }
    return fn;
}

typedef long int lint;

struct point
{
    lint x, y;
};

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;

        ll a = fib(k - 1);
        ll b = fib(k);

        vector<point> points;
        for (lint x = 0; x < n; x++)
        {
            for (lint y = 0; y < n; y++)
            {
                point candidate;
                if (a * x + b * y == n)
                {
                    candidate.x = x;
                    candidate.y = y;
                    points.push_back(candidate);
                }
            }
        }
        cout << points.size() << endl;
    }
    return 0;
}
