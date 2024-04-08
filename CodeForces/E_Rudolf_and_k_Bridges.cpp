#include <iostream>
#include <vector>
#include <set>

using namespace std;

const int INF = 1e18;

int solveVector(vector<int>& a, int d) {
    int n = a.size();
    if (n <= d) return a.front() + a.back() + 2;

    multiset<int> s;
    s.insert(a.front() + 1);

    vector<int> dp(n);

    for (int i = 1; i < n; i++) {
        if (i > d + 1) 
            s.erase(s.find(dp[i - 2]));
        
        dp[i] = *s.begin() + a[i] + 1;
        s.insert(dp[i]);
    }

    return dp.back();
}

void solve() {
    int n, m, k, d;
    cin >> n >> m >> k >> d;

    vector<vector<int>> a(n, vector<int>(m));
    for (auto& row : a) {
        for (auto& element : row) {
            cin >> element;
        }
    }

    vector<int> b(n);
    for (int i = 0; i < n; i++) {
        b[i] = solveVector(a[i], d);
    }

    int ans = INF, cur = 0;
    for (int i = 0; i < k; i++) {
        cur += b[i];
    }
    ans = cur;

    for (int i = k; i < n; i++) {
        cur = cur - b[i - k] + b[i];
        ans = min(ans, cur);
    }

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
