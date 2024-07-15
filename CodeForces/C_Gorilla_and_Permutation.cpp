#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long ll;

void print_sequence(int start, int mid, int repeat_count) {
    // Print decreasing sequence from start to mid
    for (int i = start; i > mid; i--) {
        cout << i << " ";
    }

    // Print increasing sequence from 1 to mid
    for (int i = 1; i <= mid; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        int start, mid, repeat_count;
        cin >> start >> mid >> repeat_count;
        
        print_sequence(start, mid, repeat_count);
    }
    
    return 0;
}
