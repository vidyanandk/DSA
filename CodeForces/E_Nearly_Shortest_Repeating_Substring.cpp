#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int shortestRepeatingSubstring(const string& s) {
    int n = s.size();
    int ans = n;

    for (int len = 1; len <= n; ++len) {
        for (int start = 0; start < len; ++start) {
            bool valid = true;
            for (int i = start; i < n; i += len) {
                if (s[i] != s[start]) {
                    if (start + len < n && s[i] == s[start + len]) {
                        continue; // Skip the mismatched character
                    } else {
                        valid = false;
                        break;
                    }
                }
            }
            if (valid) {
                ans = min(ans, len);
                break;
            }
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << shortestRepeatingSubstring(s) << endl;
    }
    return 0;
}
