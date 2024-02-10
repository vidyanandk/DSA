#include <iostream>
#include <vector>
#include <string>
using namespace std;

const int mod = 1000000007;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<int> temp(n);
        for (int i = 0; i < n; i++) {
            cin >> temp[i];
        }

        vector<int> frequency(26, 0);
        string ans;

        for (int i = 0; i < n; i++) {
            if (temp[i] == 0) {
                for (int j = 0; j < 26; j++) {
                    if (frequency[j] == 0) {
                        ans += char('a' + j);
                        frequency[j]++;
                        break;
                    }
                }
            } else {
                for (int j = 0; j < 26; j++) {
                    if (frequency[j] == temp[i]) {
                        ans += char('a' + j);
                        frequency[j]++;
                        break;
                    }
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
