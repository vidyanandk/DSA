#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Function to calculate the maximum product by incrementing any of the integers up to 5 times
int maxProduct(int a, int b, int c) {
    // Vector to hold the three integers
    vector<int> numbers = {a, b, c};
    
    // Try all possible distributions of 5 increments among a, b, and c
    int max_product = 0;
    
    for (int i = 0; i <= 5; ++i) {
        for (int j = 0; j <= 5 - i; ++j) {
            int k = 5 - i - j;
            // Calculate the new values after incrementing
            int new_a = numbers[0] + i;
            int new_b = numbers[1] + j;
            int new_c = numbers[2] + k;
            // Calculate the product
            int product = new_a * new_b * new_c;
            // Update the maximum product
            max_product = max(max_product, product);
        }
    }
    
    return max_product;
}

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c; // Read the integers for the test case
        cout << maxProduct(a, b, c) << endl; // Output the maximum product for the test case
    }
    return 0;
}
