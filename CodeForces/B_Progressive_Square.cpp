// #include <iostream>
// #include <vector>
// #include <unordered_map>
// #include <algorithm>
// using namespace std;
// unordered_map<int, int> freq_map;
// string progressive_square(int size, int c_value, int d_value, vector<int> &numbers) {
    

//     for (auto &num : numbers) {
//         freq_map[num]++;
//     }

//     vector<int> first_row;
//     int start_value = numbers[0];
//     first_row.push_back(start_value);

//     for (int i = 1; i < size; i++) {
//         start_value += d_value;
//         if (freq_map.find(start_value) != freq_map.end()) {
//             first_row.push_back(start_value);
//             freq_map[start_value]--;
//             if (freq_map[start_value] == 0)
//                 freq_map.erase(start_value);
//         } else {
//             return "NO";
//         }
//     }

//     for (auto &j : first_row) {
//         int start_value = j;
//         for (int i = 1; i < size; i++) {
//             start_value += c_value;
//             if (freq_map.find(start_value) == freq_map.end())
//                 return "NO";
//             else {
//                 freq_map[start_value]--;
//                 if (freq_map[start_value] == 0)
//                     freq_map.erase(start_value);
//             }
//         }
//     }

//     return "YES";
// }

// int main() {
//     int test_cases;
//     cin >> test_cases;

//     while (test_cases--) {
//         int size, c_value, d_value;
//         cin >> size >> c_value >> d_value;
//         int x=size * size;
//         vector<int> numbers(x);
//         int j=0;
//         while(j<x)
//            { cin >> numbers[j];j++;}

//         sort(numbers.begin(), numbers.end());

//         cout << progressive_square(size, c_value, d_value, numbers) << endl;
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

string progressive_square(int size, int c_value, int d_value, vector<int> &elements) {
    unordered_map<int, int> freq_map;

    for (auto &element : elements) {
        freq_map[element]++;
    }

    // Check for columns
    vector<int> first_row;
    int start_value = elements[0];
    first_row.push_back(start_value);

    for (int i = 1; i < size; i++) {
        start_value += d_value;
        if (freq_map.find(start_value) != freq_map.end()) {
            first_row.push_back(start_value);
            freq_map[start_value]--;
            if (freq_map[start_value] == 0)
                freq_map.erase(start_value);
        } else {
            return "NO";
        }
    }

    for (auto &row_element : first_row) {
        int start_value = row_element;
        for (int i = 1; i < size; i++) {
            start_value += c_value;
            if (freq_map.find(start_value) == freq_map.end())
                return "NO";
            else {
                freq_map[start_value]--;
                if (freq_map[start_value] == 0)
                    freq_map.erase(start_value);
            }
        }
    }

    return "YES";
}

int main() {
    int test_cases;
    cin >> test_cases;

    for (int test = 0; test < test_cases; ++test) {
        int size, c_value, d_value;
        cin >> size;
        cin >> c_value >> d_value;
        // vector<int> elements(size * size);
        // for (int i = 0; i < size * size; ++i)
        //     cin >> elements[i];
        int x=size * size;
        vector<int> elements(x);
        int j=0;
        while(j<x)
           { cin >> elements[j];j++;}

        sort(elements.begin(), elements.end());

        cout << progressive_square(size, c_value, d_value, elements) << endl;
    }

    return 0;
}
