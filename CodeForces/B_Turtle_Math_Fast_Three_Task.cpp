#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long LL;

int main()
{
    int test_cases;
    cin >> test_cases;
    for (int case_num = 0; case_num < test_cases; ++case_num)
    {
        int array_size;
        cin >> array_size;
        vector<int> numbers(array_size);
        LL total_sum = 0;
        bool has_one = false, has_two = false;
        for (auto &num : numbers)
        {
            cin >> num;
            total_sum += abs(num);
            if (num == 1)
                has_one = true;
            if (num == 2)
                has_two = true;
        }
        LL remainder = total_sum % 3;
        if (remainder == 0)
        {
            cout << 0 << endl;
        }
        else if (remainder == 1)
        {
            bool found = true;
            for (auto &num : numbers)
            {
                if ((total_sum - num) % 3 == 0)
                {
                    cout << 1 << endl;
                    found = false;
                    break;
                }
            }
            if (found)
                cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}
