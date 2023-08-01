#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int solution(const vector<string>& S, int K) {
        int maxStrings = 0;

        for (const string& s : S) {
            unordered_map<char, int> charCount;
            int uniqueChars = 0;
            int left = 0;
            int count = 0;

            for (int right = 0; right < s.size(); ++right) {
                if (charCount[s[right]] == 0) {
                    ++uniqueChars;
                }
                ++charCount[s[right]];

                while (uniqueChars > K) {
                    --charCount[s[left]];
                    if (charCount[s[left]] == 0) {
                        --uniqueChars;
                    }
                    ++left;
                }

                count = max(count, right - left + 1);
            }

            if (uniqueChars == K) {
                maxStrings = max(maxStrings, count);
            }
        }

        return maxStrings;
    }
};

int main() {
    Solution solution;

    vector<string> S1 = {"abc", "abb", "cb", "a", "bbb"};
    int K1 = 2;
    cout << solution.solution(S1, K1) << endl; // Output: 3

    vector<string> S2 = {"adf", "jbh", "jogi", "eljj", "adf"};
    int K2 = 3;
    cout << solution.solution(S2, K2) << endl; // Output: 2

    vector<string> S3 = {"abcd", "efgh"};
    int K3 = 3;
    cout << solution.solution(S3, K3) << endl; // Output: 0

    vector<string> S4 = {"bc", "edf", "fide", "dge", "abod"};
    int K4 = 4;
    cout << solution.solution(S4, K4) << endl; // Output: 3

    return 0;
}
