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
//         cin>>n;
//         vector<int>v(n);
//         for(int i=0;i<n;i++){
//             cin>>v[i];
//         }
//         vector<int>a(n);
//         unordered_map<int,int>mpp;
//         int m;
//         for(int i=0;i<n;i++){
//             cin>>a[i];
            
//         }
//         cin>>m;
//         for(int i=0;i<m;i++){
//              int d;
//              cin>>d;
//              mpp[d]++;
//         }
//         int f=0;
//         for(int i=0;i<n;i++){
            
//                 if(mpp.find(a[i])!=mpp.end()){
//                     mpp[a[i]]--;
//                     if(mpp[a[i]]==0) mpp.erase(a[i]);
//                 }
//                 else {
//                     cout<<"NO"<<endl;f=1;
//                     break;
//                 }
             
//         }
//         if(f==0)
//         cout<<"YES\n";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long ll;

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int t = 0; t < test_cases; ++t)
    {
        int size_n, size_m;
        cin >> size_n;
        vector<int> original(size_n);
        for (auto &element : original)
            cin >> element;

        unordered_map<int, int> map_diff, map_found;
        vector<int> found(size_n);
        for (auto &element : found)
        {
            cin >> element;
            map_found[element]++;
        }

        for (int i = 0; i < size_n; i++)
        {
            if (original[i] != found[i])
                map_diff[found[i]]++;
        }

        cin >> size_m;
        vector<int> extra(size_m);
        for (auto &element : extra)
            cin >> element;

        bool flag = false, result = true;
        if (map_found.find(extra[size_m - 1]) == map_found.end())
        {
            cout << "NO\n";
            continue;
        }

        for (int i = size_m - 1; i >= 0; i--)
        {
            map_diff[extra[i]]--;
        }

        for (const auto &pair : map_diff)
        {
            if (pair.second > 0)
            {
                result = false;
                break;
            }
        }
        if (result)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
