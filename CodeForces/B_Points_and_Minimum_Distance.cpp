// // #include <bits/stdc++.h>
// // using namespace std;

// // #define mod 1000000007
// // typedef long long ll;

// // int main()
// // {
// //     int tt;
// //     cin >> tt;
// //     while (tt--)
// //     {
// //         int n;
// //         cin>>n;
// //         vector<int>temp;
// //         for(int i=0;i<2*n;i++){
// //             cin>>temp[i];
// //         }
// //         sort(temp.begin(),temp.end());
// //         int ans=0;
// //         int y=2*n-1;
// //         for(int i=n-1;i>=0;i--){
// //             ans+=abs(temp[y]-temp[i]);
// //             y--;
// //         }
// //         y=2*n-1;
// //         cout<<ans<<endl;
// //         for(int i=n-1;i>=0;i--){
// //            cout<<temp[i]<<" "<<temp[y]<<endl;
// //            y--;
// //         }
// //     }
// //     return 0;
// // }
// #include <bits/stdc++.h>
// using namespace std;

// #define MOD_CONST 1000000007
// typedef long long LongInt;

// int main()
// {
//     int tt;
//     cin >> tt;

//     while (tt--)
//     {
//         int n;
//         cin >> n;

//         vector<int> temp;
//         for (int i = 0; i < 2 * n; i++)
//         {
//             int value;
//             cin >> value;
//             temp.push_back(value);
//         }

//         sort(temp.begin(), temp.end());
//         long long sum=0;

//         for(int i=1;i<2*n;i=i+2){
//             sum+=(abs(temp[i]-temp[i-1]));
//         }
//         cout<<sum<<endl;
//         for(int i=0;i<n;i++){
//             cout<<temp[i]<<" "<<temp[n+i]<<endl;
//         }
//     }

//     return 0;
// }/




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        vector<int> values(2 * n);
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> values[i];
        }
        sort(values.begin(), values.end());
        vector<pair<int, int>> pairs;
        for (int i = 0; i < n; i++)
        {
            pairs.push_back({values[i], values[i + n]});
        }
        long long total_distance = 0;
        for (int i = 1; i < n; i++)
        {
            total_distance += abs(pairs[i].first - pairs[i - 1].first) + abs(pairs[i].second - pairs[i - 1].second);
        }
        cout << total_distance << endl;
        for (const pair<int, int> &pair : pairs)
        {
            cout << pair.first << " " << pair.second << endl;
        }
    }
    return 0;
}
