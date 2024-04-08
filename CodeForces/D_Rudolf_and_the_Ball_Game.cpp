#include<bits/stdc++.h>
using namespace std;

void performThrowSimulation(int length, int count, int initial, vector<pair<int, char>> &throws) {
    set<int> possiblePositions;
    possiblePositions.insert(initial);

    for (int i = 0; i < count; ++i) {
        vector<int> newPossiblePositions;
        char direction = throws[i].second;
        int range = throws[i].first;
        
        for (int pos : possiblePositions) {
            if (direction == '0' || direction == '?') {
                int newPos = (pos + range - 1) % length + 1;
                newPossiblePositions.push_back(newPos);
            }
            if (direction == '1' || direction == '?') {
                int newPos = (pos - range - 1 + length) % length + 1;
                newPossiblePositions.push_back(newPos);
            }
        }

        possiblePositions.clear();
        for (int pos : newPossiblePositions) {
            possiblePositions.insert(pos);
        }
    }

    cout << possiblePositions.size() << endl;
    for (int pos : possiblePositions) {
        cout << pos << " ";
    }
    cout << endl;
}

int main() {
    int testCases;
    cin >> testCases;

    for (int t = 0; t < testCases; ++t) {
        int length, throwsCount, initialPos;
        cin >> length >> throwsCount >> initialPos;

        vector<pair<int, char>> throws(throwsCount);
        for (int i = 0; i < throwsCount; ++i) {
            cin >> throws[i].first >> throws[i].second;
        }

        performThrowSimulation(length, throwsCount, initialPos, throws);
    }

    return 0;
}
