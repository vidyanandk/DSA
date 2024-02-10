#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,p;
    cin>>n>>p;
    vector<int>gp(n+1,0);
    for(int i=1;i<=p;i++){
          int a,b;
          cin>>a>>b;
          gp[b]++;
    }
    int cnt=0;
    int flag=1;
    int ans=-1;
    for(int i=1;i<=n;i++){
        if(gp[i]==0) {
            ans=i;
            cnt++;
        }
    }
    if(cnt==1) cout<<ans;
    else cout<<-1;
    return 0;
}