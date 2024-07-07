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
//         int n,a,b;
//         cin >> n >> a >> b;
//         int ans1=n*a;
//         int ans2=ceil((b/(2*1.0))*n);
//         cout << min(ans1,ans2) << endl;
//     }
//     return 0;
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        // If it's cheaper to buy two yogurts in promotion than buying separately
        if (a * 2 <= b) {
            cout << n * a << endl; // Buy all yogurts separately
        } else {
            // Buy as many yogurts as possible in promotion
            int promotion_count = n / 2;
            int remaining = n % 2;

            // Calculate the cost
            int cost = promotion_count * b + remaining * a;
            cout << cost << endl;
        }
    }

    return 0;
}
