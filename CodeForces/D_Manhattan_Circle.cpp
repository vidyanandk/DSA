#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;  // Read number of test cases
    
    while (t--) {
        int n, m;
        cin >> n >> m;  // Read grid dimensions
        
        vector<string> grid(n);
        for (int i = 0; i < n; ++i) {
            cin >> grid[i];  // Read the grid
        }
        
        int sum_x = 0, sum_y = 0, count = 0;
        
        // Traverse the grid to find the sum of coordinates of '#'
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                if (grid[i][j] == '#') {
                    sum_x += i + 1;
                    sum_y += j + 1;
                    count++;
                }
            }
        }
        
        // Calculate the center coordinates
        int center_x = round(static_cast<double>(sum_x) / count);
        int center_y = round(static_cast<double>(sum_y) / count);
        
        // Output the center coordinates
        cout << center_x << " " << center_y << endl;
    }
    
    return 0;
}
