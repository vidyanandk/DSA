#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    
    for (int t = 0; t < testCases; ++t) {
        int size;
        cin >> size;
        
        for (int row = 0; row < 2 * size; ++row) {
            for (int col = 0; col < 2 * size; ++col) {
                if ((row / 2 + col / 2) % 2 == 0)
                    cout << "#";
                else
                    cout << ".";
            }
            cout << endl;
        }
    }
    
    return 0;
}
