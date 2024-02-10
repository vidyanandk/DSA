#include<bits/stdc++.h>
using namespace std;
static bool cmp(vector<int>&a,vector<int>&b){
    return a[0]<b[0];
}
int main(){
    int n;
    cin>>n;
   vector<vector<int>>temp(n,vector<int>(2));
    for(int i=0;i<n;i++){
        cin>>temp[i][1]>>temp[i][0];
    }
    sort(temp.begin(),temp.end(),cmp);
    int cnt=1;
    int t=temp[0][0];
    for(int i=1;i<n;i++){
        
        if(t<=temp[i][1]) {
            cnt++; t=temp[i][0];}
    }
    cout<<cnt;
    return 0;
}