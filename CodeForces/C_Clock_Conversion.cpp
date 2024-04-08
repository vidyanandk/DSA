// #include <bits/stdc++.h>
// using namespace std;

// #define mod 1000000007
// typedef long long ll;

// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//           string s;
//           cin>>s;

//     }
//     return 0;
// }

#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

// Function to convert time from 24-hour format to 12-hour format
string convertTo12Hour(string time24) {
    stringstream ss(time24);
    int hour, minute;
    char colon;
    ss >> hour >> colon >> minute;

    string period = (hour < 12) ? "AM" : "PM";
    if (hour == 0) {
        hour = 12;
    } else if (hour > 12) {
        hour -= 12;
    }

    stringstream result;
    result << setfill('0') << setw(2) << hour << ":" << setw(2) << minute << " " << period;
    return result.str();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string time24;
        cin >> time24;
        cout << convertTo12Hour(time24) << endl;
    }
    return 0;
}
