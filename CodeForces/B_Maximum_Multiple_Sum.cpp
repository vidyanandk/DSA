#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        int n;
        cin >> n;  // Read the value of n for the current test case

        int max_sum = 0;
        int optimal_x = 2;

        // Iterate over all possible values of x from 2 to n
        for (int x = 2; x <= n; ++x) {
            int sum = 0;
            // Calculate the sum of multiples of x less than or equal to n
            for (int k = 1; k * x <= n; ++k) {
                sum += k * x;
            }
            // Update the optimal x if the current sum is greater than the previous max sum
            if (sum > max_sum) {
                max_sum = sum;
                optimal_x = x;
            }
        }

        cout << optimal_x << endl;  // Output the optimal value of x for this test case
    }
    return 0;
}
