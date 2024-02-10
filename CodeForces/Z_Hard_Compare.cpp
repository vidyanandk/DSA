#include<iostream>
using namespace std;

long long power(long long base, long long exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long t1 = power(a, b);
    long long t2 = power(c, d);

    if (t1 > t2) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
