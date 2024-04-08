// // #include <bits/stdc++.h>
// // using namespace std;

// // #define mod 1000000007
// // typedef long long ll;

// // int main()
// // {
// //     int tt;
// //     cin >> tt;
// //     while (tt--)
// //     {
// //          int a,b,l;
// //          cin>>a>>b>>l;
// //          set<int> s;
// //          int p=max(l/a,b/l);
// //          for(int x=0;x<=p;x++){
// //              for(int y=0;y<=p;y++){
// //                  int n=pow(a,x);
// //                  int m=pow(b,y);
// //                  if(l>=(n*m) &&floor(l/(n*m))==ceil(l/(n*m))){
// //                      s.insert(l/(n*m));
// //                  }
// //              }
// //          }
// //          cout<<s.size()<<endl;
// //     }
// //     return 0;
// // }


// #include <bits/stdc++.h>
// using namespace std;

// #define MOD 1000000007
// typedef long long LL;

// int main()
// {
//     int test_cases;
//     cin >> test_cases;
//     while (test_cases--)
//     {
//         int a, b, l;
//         cin >> a >> b >> l;
//         unordered_set<int> s;
//         int p = max(l / a, l/ b);
//         if (p == 0) p = 1; // Handle the case when p is 0
//         for (int x = 0; x <= p; x++)
//         {
//             for (int y = 0; y <= p; y++)
//             {
//                 int n = pow(a, x);
//                 int m = pow(b, y);
//                 if (l >= (n * m) && floor(l / (n * m)) == ceil(l / (n * m)))
//                 {
//                     s.insert(l / (n * m));
//                 }
//             }
//         }
//         cout << s.size() << endl;
//     }
//     return 0;
// }


#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

int main() {
    int test_cases;
    cin >> test_cases;
    for (int t = 0; t < test_cases; ++t) {
        int a, b, l;
        unordered_set<int> possible_values;
        cin >> a >> b >> l;

        for (int x = 0; x <= 20; x++) {
            for (int y = 0; y <= 20; y++) {
                LL divisor = 1;
                for (int i = 0; i < x; i++)
                    divisor *= a;
                for (int i = 0; i < y; i++)
                    divisor *= b;

                if (divisor != 0 && l % divisor == 0)
                    possible_values.insert(l / divisor);
            }
        }

        cout << possible_values.size();
        cout << endl;
    }
    return 0;
}
