#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int>w(n);
    for(int i=0;i<n;i++){
          cin>>w[i];
    }
    sort(w.begin(),w.end());
    int ans=0;
    int i=0;
    int j=n-1;
    long long sum=0;
    while(i<=j){
        sum=w[j];
        if(sum+w[i]<=(long long)x && i!=j){
           
            ans++;
            i++;
            j--;
        }
        else{
            ans++;
            j--;
           
        }
    }
    cout<<ans;
    return 0;
}