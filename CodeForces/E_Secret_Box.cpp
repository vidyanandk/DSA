#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    
    while (t--) {
        int x, y, z;
        long long k;
        cin >> x >> y >> z >> k;  // Read the dimensions of B and the volume k of S
        
        // long long max_positions = 0;
        long long ans=0;
        for (int a = 1; a <= x; ++a) {
            if (k % a != 0) continue;  // a must be a factor of k
            long long k_div_a = k / a;
            for (int b = 1; b <= y; ++b) {
                if (k_div_a % b != 0) continue;  // b must be a factor of k_div_a
                long long c = k_div_a / b;
                if (c <= z && c * b * a == k) {
                    long long positions = (x - a + 1) * (y - b + 1) * (z - c + 1);
                    // max_positions += positions;
                    ans=max(ans,positions);
                }
            }
        }
        
        // cout << max_positions << endl;
        cout<<ans<<endl;
    }
    
    return 0;
}
