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
//           int n;
//           cin>>n;
//           string s;
//           cin>>s;
//           string ans="";
//           int cnt=1;
//           for(int i=0;i<n-1;i++){
//                 if(cnt<3){
//                     cnt++;
//                     ans+=s[i];
//                 }else{
//                      if(s[i+1]=='a'|| s[i+1]=='e'){
//                         ans+='.';
//                         ans+=s[i];
//                         cnt=2;
//                      }else{
//                         ans+=s[i];
//                         ans+='.';
//                         cnt=1;
//                      }
//                 }
//           }
//           ans+=s[n-1];
//           cout<<ans<<endl;

//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
          int length;
          cin >> length;
          string inputString;
          cin >> inputString;
          string resultString = "";
          int count = 1;
          for(int i = 0; i < length - 1; i++){
                if(count < 3){
                    count++;
                    resultString += inputString[i];
                } else {
                     if(inputString[i + 1] == 'a' || inputString[i + 1] == 'e'){
                        resultString += '.';
                        resultString += inputString[i];
                        count = 2;
                     } else {
                        resultString += inputString[i];
                        resultString += '.';
                        count = 1;
                     }
                }
          }
          resultString += inputString[length - 1];
          cout << resultString << endl;

    }
    return 0;
}
