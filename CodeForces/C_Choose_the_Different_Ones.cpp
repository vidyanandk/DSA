#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        int size_a, size_b, limit;
        cin >> size_a >> size_b >> limit;
        
        vector<int> array_a(size_a);
        vector<int> array_b(size_b);
        
        for (int i = 0; i < size_a; i++) cin >> array_a[i];
        for (int j = 0; j < size_b; j++) cin >> array_b[j];
        
        sort(array_a.begin(), array_a.end());
        sort(array_b.begin(), array_b.end());
        
        set<int> set_a, set_b;
        
        for (int i = 0; i < size_a; i++) {
            if (array_a[i] <= limit) set_a.insert(array_a[i]);
        }
        for (int j = 0; j < size_b; j++) {
            if (array_b[j] <= limit) set_b.insert(array_b[j]);
        }
        
        if (set_a.size() < limit / 2 || set_b.size() < limit / 2) {
            cout << "NO" << endl;
        } else {
            bool flag = true;
            set<int> combined_set;
            
            for (auto element : set_a) combined_set.insert(element);
            for (auto element : set_b) combined_set.insert(element);
            
            for (int i = 1; i <= limit; i++) {
                if (combined_set.find(i) == combined_set.end()) {
                    flag = false;
                }
            }
            if (flag) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
