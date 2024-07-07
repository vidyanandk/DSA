#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;  // Read the number of test cases
    while (t--) {
        string a, b;
        cin >> a >> b;  // Read the two strings

        // Swap the first characters of the two strings
        swap(a[0], b[0]);

        // Output the modified strings
        cout << a << " " << b << endl;
    }
    return 0;
}
