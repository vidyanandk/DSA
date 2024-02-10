// #include <bits/stdc++.h>
// using namespace std;

// #define mod 1000000007
// typedef long long ll;
// bool isPerfectSquare(long double x)
// {
//     // Find floating point value of
//     // square root of x.
//     if (x >= 0) {
 
//         long long sr = sqrt(x);
         
//         // if product of square root 
//         //is equal, then
//         // return T/F
//         return (sr * sr == x);
//     }
//     // else return false if n<0
//     return false;
// }
// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//           int n;
//           cin>>n;

//           long double sum=0;
//           for(int i=0;i<n;i++){
//             int x;
//             cin>>x;
//             sum+=x;
//           }
//           if(isPerfectSquare(sum)) cout<<"YES\n";
//           else cout<<"NO\n";

//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long LL;

bool isPerfectSquare(long double x)
{
    if (x >= 0) {
        LL squareRoot = sqrt(x);
        return (squareRoot * squareRoot == x);
    }
    return false;
}

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int arraySize;
        cin >> arraySize;

        long double arraySum = 0;
        for (int i = 0; i < arraySize; i++)
        {
            int element;
            cin >> element;
            arraySum += element;
        }

        if (isPerfectSquare(arraySum))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
