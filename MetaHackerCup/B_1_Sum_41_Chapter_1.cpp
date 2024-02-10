#include <iostream>
#include <vector>
#include <cmath>

#define MOD 1000000007
typedef long long ll;

std::vector<int> primeFactors(int n) {
    std::vector<int> factors;
    while (n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

void processTestCase(int caseNumber) {
    int a;
    std::cin >> a;
    std::vector<int> pf = primeFactors(a);
    ll sum = 0;

    for (int factor : pf) {
        sum += factor;
    }

    const int MAX_SUM = 41;
    const int MAX_SIZE = 100;

    if (sum > MAX_SUM || pf.size() > MAX_SIZE) {
        std::cout << "Case #" << caseNumber << ": " << -1 << std::endl;
    } else {
        int nZero = MAX_SUM - sum;
        for (int i = 0; i < nZero; i++) {
            pf.push_back(1);
        }

        if (pf.size() > MAX_SIZE) {
            std::cout << "Case #" << caseNumber << ": " << -1 << std::endl;
        } else {
            std::cout << "Case #" << caseNumber << ": " << pf.size();
            for (int i = 0; i < pf.size(); i++) {
                std::cout << " " << pf[i];
            }
            std::cout << std::endl;
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ll tt;
    std::cin >> tt;

    for (int i = 1; i <= tt; i++) {
        processTestCase(i);
    }

    return 0;
}
