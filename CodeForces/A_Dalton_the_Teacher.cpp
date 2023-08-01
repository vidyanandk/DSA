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
        int a;
        cin>>a;
        int cnt=0;
        // vector<int>temp(a);
       for(int i=1;i<=a;i++){
         int b;
        cin>>b;
          if(b==i) cnt++;
       }
       if(cnt<=1) cout<< cnt<<endl;
       else if(cnt%2==0) cout<< cnt/2<<endl;
       else cout<<(cnt/2)+1<<endl;
       
    }
    return 0;
}