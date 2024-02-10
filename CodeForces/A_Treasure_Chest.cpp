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
//         int x,y,k;
//         cin>>x>>y>>k;

//         if(y<=x) cout<<x<<endl;
//         else {
//             int v=x+k;
//             if(x+k>=y)
//            cout<<(x+k)<<endl;
//            else {
               
//                cout<<2*y-v<<endl;
//            }
//         }
        
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

#define MOD_CONST 1000000007
typedef long long LongInt;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int initial_value, final_value, k_value;
        cin >> initial_value >> final_value >> k_value;

        if (final_value <= initial_value)
        {
            cout << initial_value << endl;
            continue;
        }

        int temporary_value = initial_value + k_value;

        if (final_value <= temporary_value)
        {
            cout << final_value << endl;
        }
        else
        {
            cout << 2 * final_value - temporary_value << endl;
        }
    }

    return 0;
}
