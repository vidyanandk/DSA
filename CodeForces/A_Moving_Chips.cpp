#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    
    while (tt--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int cnt = 0;
        int st = 0;
        int end = 0;
        
        // Find the first and last occurrence of 1
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                st = i;
                break;
            }
        }
        
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == 1) {
                end = i;
                break;
            }
        }
        
        // Count the number of zeros between the first and last occurrence of 1
        for (int i = st + 1; i < end; i++) {
            if (a[i] == 0) {
                cnt++;
            }
        }
        
        if (st == end) {
            cout << 0 << endl;
        } else {
            cout << cnt << endl;
        }
    }
    
    return 0;
}
