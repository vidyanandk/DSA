
#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int>& a, vector<int>& b) {
    return a[0] < b[0];
}

int binary(int tar, vector<vector<int>>& t, int i, int j) {
    while (i <= j) {
        int mid = (i + j) / 2;
        if (t[mid][0] == tar) return mid;
        else if (tar < t[mid][0]) j = mid - 1;
        else i = mid + 1;
    }
    return -1;
}

int main() {
    int n, s;
    cin >> n >> s;
    vector<vector<int>> temp(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> temp[i][0];
        temp[i][1] = i + 1;
    }

    sort(temp.begin(), temp.end(), cmp);

    for (int i = 0; i < n - 1; i++) {
        int target = s - temp[i][0];
        int j = binary(target, temp, i + 1, n - 1);
        if (j != -1) {
            cout << temp[i][1] << " " << temp[j][1];
            return 0;
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}

