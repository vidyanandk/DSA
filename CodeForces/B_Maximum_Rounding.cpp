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
//         ll n;
//         cin>>n;
        
//         // ll t=10,m=5;

//         // while(n/t){
//         //   ll r=n%t;
//         //   if(r>=(t/10)*m){
//         //     n-=r;
//         //     n+=t;
           
//         //   }
//         // //m=m*t;
//         // t=t*10;
//         // }

//         //  ll r=n%t;
//         //   if(r>=(t/10)*m){
//         //     n-=r;
//         //     n+=t;
           
//         //   }
//         // //m=m*t;
//         // t=t*10;
//         // cout<<n<<endl;
//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        // Increment digits from right to left
        int carry = 0;
        for (int i = s.length() - 1; i >=0; i--)
        {
            int digit = s[i] - '0' + carry;
            if (digit >= 5)
            { 
                s[i] = '0';
                for(int j=i+1;j<s.length();j++){
                    s[j]='0';
                }
                carry = 1;
            }
            else
            {
                s[i] = digit + '0';
                carry = 0;
            }
        }
       
        if (carry)
            s = '1' + s;

        cout << s << endl;
    }
    return 0;
}

