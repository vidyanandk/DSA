

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
        string a;
        cin>>a;
        int zero = 0, one = 0;
        int i=0;
        while(i<n) {
            if (a[i] == '0') {
                while (i < n && a[i] == '0') i++;
                zero++;
            } else {
                one++;
                i++;
            }
        }

        if (zero >= one) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
    return 0;
}
