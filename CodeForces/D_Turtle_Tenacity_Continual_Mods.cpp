#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll testCases;
    cin >> testCases;
    for (ll tc = 0; tc < testCases; ++tc) {
        ll size;
        cin >> size;
        vector<ll> numbers(size);
        for (int i = 0; i < size; ++i) 
            cin >> numbers[i];
        
        sort(numbers.begin(), numbers.end());
        
        if (size == 1 || numbers[0] != numbers[1]) 
            cout << "YES" << endl;
        else {
            bool isDivisible = false;
            for (int i = 1; i < size; ++i) {
                if (numbers[i] % numbers[0] != 0) {
                    isDivisible = true;
                    break;
                }
            }
            if (isDivisible) 
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
    return 0;
}
