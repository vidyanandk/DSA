#include <bits/stdc++.h>
using namespace std;



int main()
{
    int test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        int n;
        cin >> n;
        vector<int> first_sequence(n), second_sequence(n);
        for (auto &num : first_sequence)
        {
            cin >> num;
        }
        for (auto &num : second_sequence)
        {
            cin >> num;
        }
        vector<int> differences(n);
        int maximum_difference = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            differences[i] = first_sequence[i] - second_sequence[i];
            maximum_difference = max(maximum_difference, differences[i]);
        }
        vector<int> max_elements;
        for (int i = 0; i < differences.size(); i++)
        {
            if (differences[i] == maximum_difference)
                max_elements.push_back(i + 1);
        }
        cout << max_elements.size() << endl;
        for (auto &num : max_elements)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
