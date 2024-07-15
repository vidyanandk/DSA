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
        vector<int>ans;
        ans.push_back(n);
        for(int i=0;i<32 && n!=1;i++){
            if((1<<i)&n){
                ans.push_back((1<<i)^n);
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}