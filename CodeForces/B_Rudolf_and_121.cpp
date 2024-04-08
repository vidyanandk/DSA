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
//         int n;
//         cin >> n;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }
//         int flag = 0;
//         for (int i = 1; i <= n - 2; i++)
//         {
//             //  if(a[i]<0)
//             // {
//             //     // flag=1;
//             //     break;
//             // }

//             int x = a[i-1];
//             a[i-1]-=x;
           
            
//             if (a[i ] - (x * 2) >= 0)
//             {
//                 a[i] = a[i] - (x * 2);
//             }else break;
           
//             if (a[i + 1] - (x) >= 0)
//             {
//                 a[i + 1] = a[i + 1] - (x);
//             }else break;
           
//         }

//         for(auto it:a)
//         {
//             // cout<<it<<" ";
//             if(it!=0)
//             {
//                 flag=1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm> // Add this line
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; ++i) {
            cin >> v[i];
        }
        for (int i = 1; i < n - 1; ++i) {
            if (v[i - 1] <= v[i + 1] && v[i] >= 2 * v[i - 1]) {
                v[i + 1] -= v[i - 1];
                v[i] -= 2 * v[i - 1];
                v[i - 1] = 0;
            }
        }
        if (count(v.begin(), v.end(), 0) != n) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}
