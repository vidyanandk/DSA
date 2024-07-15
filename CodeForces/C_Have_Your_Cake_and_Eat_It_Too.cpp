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
        vector<vector<int>> temp(3, vector<int>(n, 0));
        for(int i=0 ; i<3 ; i++)
        {
            for(int j=0 ; j<n ; j++)
            {
                cin >> temp[i][j];
            }
        }
    }
    return 0;
}