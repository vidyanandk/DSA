#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> solution(vector<vector<string>>& requests, int totalSlots) {
    vector<int> results;
    vector<bool> slots(totalSlots, false);

    for (const auto& request : requests) {
        if (request[0] == "store") {
            int numSlots = stoi(request[2]);
            int startIndex = stoi(request[1]);

            int found = -1;
            bool circular = false;

            for (int i = startIndex; i < startIndex + totalSlots; ++i) {
                int index = i % totalSlots;
                if (!slots[index]) {
                    int count = 0;
                    while (count < numSlots && !slots[(index + count) % totalSlots]) {
                        count++;
                    }
                    if (count == numSlots) {
                        found = index;
                        break;
                    }
                }

                if (i == startIndex) {
                    circular = true;
                }
            }

            if (found != -1) {
                for (int j = 0; j < numSlots; ++j) {
                    slots[(found + j) % totalSlots] = true;
                }
                results.push_back(found);
            } else {
                results.push_back(-1);
            }
        } else if (request[0] == "free") {
            int numSlots = stoi(request[2]);
            int startIndex = stoi(request[1]);

            int freedSlots = 0;
            for (int i = 0; i < numSlots; ++i) {
                if (slots[(startIndex + i) % totalSlots]) {
                    slots[(startIndex + i) % totalSlots] = false;
                    ++freedSlots;
                }
            }
            results.push_back(freedSlots);
        }
    }

    return results;
}

int main() {
    vector<vector<string>> requests = {{"store", "0", "6"}, {"store", "11", "3"}, {"free", "0", "3"}, {"store", "10", "3"}, {"store", "6", "6"}};
    int totalSlots = 15;

    vector<int> results = solution(requests, totalSlots);

    for (int result : results) {
        cout << result << " ";
    }
    cout << endl;

    return 0;
}
