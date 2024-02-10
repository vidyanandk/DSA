#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<int>app(n);
    vector<int>siz(m);
    for(int i=0;i<n;i++){
        cin>>app[i];
    }
    for(int j=0;j<m;j++) cin>>siz[j];
    sort(app.begin(),app.end());
    sort(siz.begin(),siz.end());
    int cnt=0;
    int j=0;
    for(int i=0;i<m;i++){
       if(j<n){
        if(siz[i]>=app[j]-k && (siz[i]<=app[j]+k)){ cnt++;j++;}
        // else if(siz[i]<app[j]-k) { }
       else if(siz[i]>app[j]+k){i--;j++;}
       }
    
    }
    cout<<cnt;
    return 0;
}