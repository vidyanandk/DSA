#include <iostream>
#define MOD 1e9 + 7
#define ll long long

ll custom_gcd(ll a, ll b)
{
    if (a == b)
        return a;
    if (a < b)
    {
        return custom_gcd(b, a);
    }
    while (b != 0)
    {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

ll custom_lcm(ll a, ll b)
{
    ll result = a * b;
    result = result / custom_gcd(a, b);
    return result;
}

int main()
{
    int test_cases;
    std::cin >> test_cases;
    while (test_cases--)
    {
        ll n, x, y;
        std::cin >> n >> x >> y;
        ll repeat = n / custom_lcm(x, y);
        ll answer = 0;
        ll count_x = (n / x) - repeat;
        ll count_y = (n / y) - repeat;
        answer += ((n * (n + 1)) / 2) - (((n - count_x) * (n - count_x + 1)) / 2) - ((count_y * (count_y + 1)) / 2);
        std::cout << answer << std::endl;
    }
    return 0;
}
