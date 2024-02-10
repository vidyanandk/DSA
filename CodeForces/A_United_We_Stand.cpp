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

        map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            mpp[b]++;
        }
        if (mpp.size() == 1)
            cout << "-1\n";
        else
        {
            int a = mpp.begin()->second;
            cout<<a<<" "<<n-a<<endl;
            while (a)
            {
                cout << mpp.begin()->first << " ";
                a--;
            }
            cout << endl;
            auto it = mpp.begin();
            it++;
            for (it; it != mpp.end(); it++)
            {
                int b = it->second;
                while (b)
                {
                    cout << it->first << " ";
                    b--;
                }
            }
            cout << endl;
        }
    }
    return 0;
}