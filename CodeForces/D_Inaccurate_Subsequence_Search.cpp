// **********taking help

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
         int n, m, k;
    cin >> n >> m >> k;

    map<int, int> frequencyMap1, frequencyMap2;
    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    for (int x : b)
        frequencyMap1[x]++;

    int cur = 0, ans = 0;

    for (int i = 0; i < m; i++)
        frequencyMap2[a[i]]++;

    for (auto it : frequencyMap1) {
        int val = it.first;
        if (frequencyMap2.find(val) != frequencyMap2.end()) {
            cur += min(frequencyMap1[val], frequencyMap2[val]);
        }
    }

    if (cur >= k)
        ans++;

    if (n == m) {
        cout << ans << endl;
        return 0;
    }

    for (int i = 0; i < n - m; i++) {
        if (a[i] != a[i + m]) {
            cur -= min(frequencyMap1[a[i]], frequencyMap2[a[i]]);
            cur -= min(frequencyMap1[a[i + m]], frequencyMap2[a[i + m]]);
            frequencyMap2[a[i]]--;
            frequencyMap2[a[i + m]]++;
            cur += min(frequencyMap1[a[i]], frequencyMap2[a[i]]);
            cur += min(frequencyMap1[a[i + m]], frequencyMap2[a[i + m]]);
        }

        if (cur >= k)
            ans++;
    }

    cout << ans << endl;
    }
    return 0;
}