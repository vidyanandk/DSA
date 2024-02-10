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
        int n, k, x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (auto &i : a)
        {
            cin >> i;
        }
        sort(a.begin(), a.end());
        long long sum = 0;
        for (int i = 0; i < n - x; i++)
        {
            sum += a[i];
        }

        for (int i = n - x; i < n; i++)
            sum -= a[i];

        int l = n - x - 1, r = n - 1;
        long long maxi = sum;
        while (k>0  && l >= 0)
        {
            sum = sum + a[r] - a[l]-a[l];
            if (sum > maxi)
                maxi = sum;
            k--;
            r--;
            l--;
        }
        while(r>=0 && k>0){
           sum=sum+a[r];
           maxi=max(sum,maxi);
           k--;r--;
        }
        cout << maxi << endl;
    }
    return 0;
}
