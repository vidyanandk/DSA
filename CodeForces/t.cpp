#include <bits/stdc++.h>
using namespace std;
int main (){
int n,m;
cin>>n>>m;
vector<int>a(m);
for(int i=0;i<m;i++)
{
    a[i]=i+1;
}
vector<int>ans(n);
for(int i=0;i<n;i++)
{
    ans[i]=a[i%m];
    cout<<ans[i]<<" ";
}
cout<<endl;

    return 0;
}


