#include <iostream>
#include <vector>
using namespace std;


int main() {
    int t;
    cin >> t; // Read number of test cases
   for (int i = 0; i < t; ++i) {
        int n;
        cin >> n; // Read the value of n
        for (int j = 1; j <= n; ++j) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
