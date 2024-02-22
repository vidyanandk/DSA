#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000007
typedef long long ll;

int main() {
    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n;
        cin >> n;
        vector<int> numbers(n);

        for (auto &num : numbers) {
            cin >> num;
        }

        int first_number = numbers[0];
        int count1 = 1;
        int i = 1;
        while (i < n && first_number == numbers[i]) {
            count1++;
            i++;
        }

        int last_number = numbers[n - 1];
        int count2 = 1;
        i = n - 2;
        while (i >= 0 && last_number == numbers[i]) {
            count2++;
            i--;
        }

        if (numbers[0] != numbers[n - 1]) {
            int maximum = max(count1, count2);
            cout << n - maximum << endl;
        } else {
            int minimum = min(n, count1 + count2);
            cout << n - minimum << endl;
        }
    }

    return 0;
}
