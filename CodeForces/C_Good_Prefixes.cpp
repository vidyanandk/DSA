#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Read the number of elements in the array
        vector<int> a(n);
        // sort(a.begin(),a.end());
        for (int i = 0; i < n; ++i) {
            cin >> a[i];  // Read the elements of the array
        }
        
        long long prefixSum = 0;
        int goodPrefixes = 0;
        // unordered_map<long long ,long long>mpp;
        // mpp[0]++;
        int maxi=0;
        for (int i = 0; i < n; ++i) {
            prefixSum += a[i];  // Update the prefix sum
            maxi=max(maxi,a[i]);
            // Check if the current element can be represented as the sum of the rest of the elements
            if (prefixSum - maxi == maxi) {
                ++goodPrefixes;
            }
        }

        cout << goodPrefixes << endl;  // Output the number of good prefixes for this test case
    }

    return 0;
}
