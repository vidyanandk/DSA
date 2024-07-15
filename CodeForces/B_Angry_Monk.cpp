#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long ll;

ll calculate_operations(vector<int>& pieces) {
    sort(pieces.begin(), pieces.end());
    ll operations_count = 0;
    int num_pieces = pieces.size();
    
    for (int i = 0; i < num_pieces - 1; i++) {
        operations_count = operations_count + 2 * pieces[i] - 1;
    }
    
    return operations_count;
}

int main() {
    
    int test_cases;
    cin >> test_cases;
    
    while (test_cases--) {
        int total_length, num_segments;
        cin >> total_length >> num_segments;
        
        vector<int> segment_lengths(num_segments);
        for (auto &length : segment_lengths)
            cin >> length;
        
        cout << calculate_operations(segment_lengths) << endl;
    }
    
    return 0;
}
