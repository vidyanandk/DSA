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
        vector<vector<int>> t;
        int n;
        cin>>n;
        vector<int> d;
        for(int i=0;i<n;i++){
            vector<int> temp;
            int a,b;
            cin>>a>>b;
            temp.push_back(b);
            temp.push_back(a);
            temp.push_back(i);
            if(a>10) d.push_back(i);
            t.push_back(temp);
        }
        for(int i=0;i<d.size();i++){
            t[d[i]][0]=-1;
        }
        sort(t.begin(),t.end());
        cout<<t[n-1][2]+1<<endl;
    }
    return 0;
}