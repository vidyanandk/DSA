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
          int n;
          cin>>n;
          set<int>st;
          for(int i=0;i<n;i++){
            int a;
            cin>>a;
            st.insert(a);
          }
          vector<int> temp(st.begin(),st.end());
         int m=temp.size();
        //   vector<set<int>>t;
          int i=0;
          int ans=0;
          while(i<m){
           set<int>mpp;
           mpp.insert(1);
           int diff=temp[i]-1;
           i++;
           while(i<m && temp[i]-diff<=n){
             mpp.insert(temp[i]-diff);
             i++;
           }
           int z=mpp.size();
           ans=max(ans,z);
        }
        cout<<ans<<endl;
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// #define mod 1000000007
// typedef long long ll;

// int main() {
//     int tt;
//     cin >> tt;
//     while (tt--) {
//         int n;
//         cin >> n;
//         set<int> st;
//         for (int i = 0; i < n; i++) {
//             int a;
//             cin >> a;
//             st.insert(a);
//         }
//         vector<int> temp(st.begin(), st.end());
//         int m = temp.size();
//         int ans = 0;
//         for (int i = 0; i < m; i++) {
//             vector<int> freq(n + 1, 0);
//             int diff = temp[i] - 1;
//             int j = i;
//             int distinctCount = 0;
//             while (j < m && temp[j] - diff <= n) {
//                 if (freq[temp[j] - diff] == 0) {
//                     distinctCount++;
//                 }
//                 freq[temp[j] - diff]++;
//                 j++;
//             }
//             ans = max(ans, distinctCount);
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }




