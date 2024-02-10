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
//           map<char,int>mpp;
//           for(int i=0;i<3;i++){
//             for(int j=0;j<3;j++){
//                  char c;
//                  cin>>c;
//                  mpp[c]++;
//             }
//           }
//           char ans;
//           for(auto it=mpp.begin();it!=mpp.end();it++){
//             if(it->first=='A' && it->second!=3) {
//                 cout<<"A"<<endl;
//             }
//             else if(it->first=='B' && it->second!=3) {
//                 cout<<"B"<<endl;
//             }
//             else if(it->first=='C' && it->second!=3) {
//                 cout<<"C"<<endl;
//             }
//           }
//     }
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long LL;

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        map<char, int> charCountMap;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                char character;
                cin >> character;
                charCountMap[character]++;
            }
        }
        char resultChar;
        for (auto it = charCountMap.begin(); it != charCountMap.end(); it++)
        {
            if (it->first == 'A' && it->second != 3)
            {
                resultChar = 'A';
            }
            else if (it->first == 'B' && it->second != 3)
            {
                resultChar = 'B';
            }
            else if (it->first == 'C' && it->second != 3)
            {
                resultChar = 'C';
            }
        }
        cout << resultChar << endl;
    }
    return 0;
}
