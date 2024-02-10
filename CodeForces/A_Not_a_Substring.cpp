// #include <bits/stdc++.h>
// using namespace std;

// #define mod 1000000007
// typedef long long ll;
// int isSubstring(string s1, string s2)
// {
//     // using find method to check if s1 is
//     // a substring of s2
//     if (s2.find(s1) != string::npos)
//         return s2.find(s1);
//     return -1;
// }
// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         string s;
//         cin>>s;
//         int n=s.length();
//         string s1,s2;
//         for(int i=0;i<n;i++){
//             s1+="()";
//         }
//         int res=isSubstring(s,s1);
//         if(res!=-1){
//             cout<<"YES"<<endl<<s1<<endl;
//         }
//         else{
//             for(int i=0;i<n;i++){
//             s2+='(';
//             s2+=')';
//           }
//            res=isSubstring(s,s2);
//           if(res!=-1){
//             cout<<"YES"<<endl<<s2<<endl;
//           }
//           else cout<<"NO"<<endl;
//         }

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
typedef long long LL;

int main()
{
    int num_test_cases;
    cin >> num_test_cases;

    while (num_test_cases--)
    {
        string input_bracket_sequence;
        cin >> input_bracket_sequence;
        int n = input_bracket_sequence.length();
        string regular_sequence1, regular_sequence2;
        string temp = "()";

        for (int i = 0; i < n; i++)
        {
            regular_sequence1 += temp;
        }
        for (int i = 0; i < n; i++)
        {
            regular_sequence2 += '(';
        }
        for (int i = 0; i < n; i++)
        {
            regular_sequence2 += ')';
        }

        if (regular_sequence1.find(input_bracket_sequence) == string::npos)
        {
            cout << "YES\n";
            cout << regular_sequence1 << endl;
        }
        else if (regular_sequence2.find(input_bracket_sequence) == string::npos)
        {
            cout << "YES\n";
            cout << regular_sequence2 << endl;
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
