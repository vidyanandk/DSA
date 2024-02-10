
// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<int> a(n);

//         for (int i = 0; i < n; ++i) {
//             cin >> a[i];
//         }

//         unordered_map<long long, int> prefixSumCount; // Map to store count of prefix sums

//         long long oddSum = 0, evenSum = 0;
//         int answer = 0;

//         prefixSumCount[0] = 1; // Initialize with an empty subarray

//         for (int i = 0; i < n; ++i) {
//             if (i % 2 == 0) {
//                 evenSum += a[i];
//             } else {
//                 oddSum += a[i];
//             }

//             long long diff = oddSum - evenSum;

//             if (prefixSumCount.count(diff)) {
//                 answer = 1;
//                 break;
//             }

//             prefixSumCount[diff]++;
//         }

//         cout << (answer ? "YES" : "NO") << endl;
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> juiceAmount(n);

        for (int i = 0; i < n; ++i) {
            cin >> juiceAmount[i];
        }

        unordered_map<long long, int> prefixSumCount; // Map to store count of prefix sums

        long long sumOdd = 0, sumEven = 0;
        int result = 0;

        prefixSumCount[0] = 1; // Initialize with an empty subarray

        for (int i = 0; i < n; ++i) {
            if (i % 2 == 0) {
                sumEven += juiceAmount[i];
            } else {
                sumOdd += juiceAmount[i];
            }

            long long diff = sumOdd - sumEven;

            if (prefixSumCount.count(diff)) {
                result = 1;
                break;
            }

            prefixSumCount[diff]++;
        }

        cout << (result ? "YES" : "NO") << endl;
    }

    return 0;
}
