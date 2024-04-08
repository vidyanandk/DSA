#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

#define MOD 1000000007
typedef long long ll;

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 0; t < testCases; t++) {
         map<ll, ll> coordinateStrengthMap; 
        int n;
        double k;
        cin >> n >> k;
        vector<int> strengths(n), coordinates(n);
        
        for (auto &strength : strengths) {
            cin >> strength;
        }
        for (auto &coordinate : coordinates) {
            cin >> coordinate;
        }

        ll totalBoundaryStrength = 0;
        ll totalCreatureStrength = 0;
        bool isSafe = true;

        for (int i = 0; i < n; i++) {
            coordinateStrengthMap[abs(coordinates[i])] += strengths[i];
        }

       

        for (auto &coordinateStrengthPair : coordinateStrengthMap) {
            totalBoundaryStrength = coordinateStrengthPair.first * k;
            totalCreatureStrength += coordinateStrengthPair.second;
            if (totalCreatureStrength > totalBoundaryStrength) {
                isSafe = false;
                break;
            }
        }

        if (isSafe) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
