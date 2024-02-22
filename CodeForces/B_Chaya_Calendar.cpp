#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int testCases;
    std::cin >> testCases;

    while (testCases--) {
        int size;
        std::cin >> size;
        std::vector<int> numbers(size);

        for (auto &num : numbers)
            std::cin >> num;

        int previous = numbers[0];
        for (int idx = 1; idx < size; idx++) {
            if (numbers[idx] <= previous + 1) {
                int ceilValue = std::ceil((previous + 1) / (numbers[idx] * 1.0));
                numbers[idx] = numbers[idx] * ceilValue;
            }
            previous = numbers[idx];
        }
        std::cout << numbers[size - 1] << std::endl;
    }
    return 0;
}
