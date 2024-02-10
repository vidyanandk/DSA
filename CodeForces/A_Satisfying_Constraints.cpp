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
        vector<int>temp;
        int maxi=-1;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int a,x;
            cin>>a>>x;
            if(a==1){
                maxi=max(maxi,x);
            }
            else if(a==2){
                mini=min(mini,x);
            }else{
                temp.push_back(x);
            }
        } 
        int ans=0;
        ans=mini-maxi+1;
        for(int i=0;i<temp.size();i++){
            if(temp[i]>=maxi && temp[i]<=mini) ans--;
        } 
        if(ans>0)
        cout<<ans<<endl;
        else cout<<0<<endl;
    }
    return 0;
}