// #include <bits/stdc++.h>
// using namespace std;

// #define MOD_CONSTANT 1000000007
// typedef long long LongLong;

// int main()
// {
//     int tCases;
//     cin >> tCases;
//     while (tCases--)
//     {
//         int numPts;
//         cin >> numPts;
//         vector<pair<int, int>> pts(numPts);
//         for (auto &pt : pts)
//         {
//             cin >> pt.first >> pt.second;
//         }
//         sort(pts.begin(), pts.end());
//         set<int> yCoords;
//         for (auto &pt : pts)
//         {
//             yCoords.insert(pt.second);
//         }

//         LongLong totalCount = 0;
//         for (auto &pt : pts)
//         {
//             auto it = yCoords.find(pt.second);
//             totalCount += distance(yCoords.begin(), it);
//             yCoords.erase(it);
//         }

//         cout << totalCount << endl;
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
#define ll long long
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<pair<ll, ll>> coords;
        pbds ordered_set;

        for (int i = 1; i <= n; i++)
        {
            ll x, y;
            cin >> x >> y;
            coords.push_back({x, y});
        }

        sort(coords.begin(), coords.end());

        ll res = 0;
        for (int i = 0; i < coords.size(); i++)
        {
            ll less_than_current = ordered_set.order_of_key(coords[i].second);
            res = res + ordered_set.size() - less_than_current;
            ordered_set.insert(coords[i].second);
        }

        cout << res << endl;
    }
    return 0;
}
