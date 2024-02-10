#include <iostream>
#include <vector>
using namespace std;

#define mod 1000000007
typedef long long ll;

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

        int q;
        cin >> q;
        vector<vector<int>> t;
        for (int i = 0; i < q; i++) {
            int l, r;
            cin >> l >> r;
            t.push_back({l, r});
        }

        for (int i = 0; i < q; i++) {
            int l = t[i][0];
            int r = t[i][1];
            int a = temp[l - 1];
            int x = l - 1;
            int y = -1;
            while (l <= r - 1) {
                if (a != temp[l]) {
                    y = l;
                    break;
                }
                l++;
            }
            if (y != -1) {
                cout << x+1 << " " << y+1 << endl;
            } else {
                cout << -1 << " " << -1 << endl;
            }
            
        }
        cout<<endl;
    }
    return 0;
}
