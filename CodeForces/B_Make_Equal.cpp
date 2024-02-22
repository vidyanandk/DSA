// #include <bits/stdc++.h>
// using namespace std;

// #define mod 1000000007
// typedef long long ll;

// int main()
// {
//     int tt;
//     cin >> tt;
//     ll sum=0;
//     while (tt--)
//     {
//           int n;
//           cin>>n;
//           vector<int>temp(n);
//           for(int i=0;i<n;i++){
//             cin>>temp[i];
//             sum+=temp[i];
//           }
//           ll x=sum/n;
//           ll cur=0;
//           ll f=0;
//           for(int i=0;i<n;i++){
//                if(temp[i]>=x){
//                   cur+=(temp[i]-x);
//                   cout<<cur<<endl;
//                }
//                else if(cur>0){
//                   int r=x-temp[i];
//                   cur-=r;
//                   cout<<cur<<endl;
//                }else if(cur==0){
//                 cout<<cur<<endl;
//                 f=1;
//                   break;
//                }
//           }
//           if(f==1) cout<<"NO\n";
//           else cout<<"YES\n";
//     }
//     return 0;
// }

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
        ll sum = 0;

        for (auto &num : numbers) {
            cin >> num;
            sum += num;
        }

        ll minimum_value = sum / n;
        ll left_over = 0;
        bool imbalance_detected = false;

        for (auto &num : numbers) {
            if (num < minimum_value) {
                if (num + left_over < minimum_value) {
                    imbalance_detected = true;
                    break;
                }
            }
            left_over += num - minimum_value;
        }

        if (!imbalance_detected) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
