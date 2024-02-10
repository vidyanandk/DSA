#include<bits/stdc++.h>
using namespace std;
vector<string> gray(vector<string>&ans,int n){
         for(int i=2;i<=n;i++){
                int t=ans.size()-1;
             for(int j=t;j>=0;j--) {ans.push_back("1"+ans[j]);ans[j]="0"+ans[j];}     
         }
         return ans;
}
int main(){
    int n;
    cin>>n;
    vector<string>ans;
    if(n==1) {
        cout<<0<<endl;
        cout<<1<<endl;
    }
    else{
        ans.push_back("0");
        ans.push_back("1");
        ans=gray(ans,n);
        for(int i=0;i<ans.size();i++) cout<<ans[i]<<endl;
    }
    return 0;
}