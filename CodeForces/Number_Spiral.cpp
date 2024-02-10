// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         long long a, b;
//         cin >> a >> b;
//         long long m = max(a, b);

//         vector<vector<long long>> ans(m, vector<long long>(m,0));

//         if (m == 1)
//         {
//             cout << 1 << endl;
//         }
//         else if (m == 2)
//         {
//             ans[0][0] = 1;
//             ans[0][1] = 2;
//             ans[1][1] = 3;
//             ans[1][0] = 4;
//             cout << ans[a - 1][b - 1] << endl;
//         }
//         else
//         {
//             ans[0][0] = 1;
//             ans[0][1] = 2;
//             ans[1][1] = 3;
//             ans[1][0] = 4;
//             int flag = 1;
//             long long k = 2;
//             long long cnt = 5;
//             while (k <= m - 1)
//             {
//                 if (flag == 1)
//                 {
//                     for (int i = 0; i <= k; i++)
//                     {
//                         ans[k][i] = cnt;
//                         cnt++;
//                     }
//                     for (int i = k - 1; i >= 0; i--)
//                     {
//                         ans[i][k] = cnt;
//                         cnt++;
//                     }
//                     flag = 2;
//                 }
//                 else if (flag == 2)
//                 {
//                     for (int i = 0; i <= k; i++)
//                     {
//                         ans[i][k] = cnt;
//                         cnt++;
//                     }
//                     for (int i = k - 1; i >= 0; i--)
//                     {
//                         ans[k][i] = cnt;
//                         cnt++;
//                     }
//                     flag = 1;
//                 }
//                 k++;
//             }

//             cout << ans[a - 1][b - 1] << endl;
//         }
//     }
//     return 0;
// }








#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tt;
    cin >> tt;
    while (tt--)
    {
        long long r, c;
        cin >> r >> c;
        if(c>r){
            if(c%2!=0) cout<<(c*c)-r+1<<endl;
            else{
                cout<<(c-1)*(c-1)+r<<endl;
            }
        }
    
        else{
            if(r%2!=0){
                 cout<<(r-1)*(r-1)+c<<endl;
            }
            else{
                cout<<(r*r)-c+1<<endl;
            }
        }

        
    }
    return 0;
}






