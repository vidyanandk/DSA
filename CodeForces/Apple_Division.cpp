// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     vector<int> temp(n);
//     long long sum=0;
//     for(int i=0;i<n;i++){
//         cin>>temp[i];
//         sum+=temp[i];
//     }
//     sort(temp.begin(),temp.end());
//     long long g1=0;
//     long long g2=0; 
//     long long h=sum/2;
//     for(int i=n-1;i>=0;i--){
//         if(g1+temp[i] <=h || (g1<=g2)){
//             g1+=temp[i];
//         }
//         else{
//             g2+=temp[i];
//         }
//     }
//     cout<<abs(g1-g2)<<endl;
//     return 0;
// }












#include<bits/stdc++.h>
using namespace std;
int division(long long s,long long sum,int i,long long ans,vector<int>&temp){
    if(i==temp.size()){
        return s;
    }
    int a=0;
    int b=0;
    a= division(s+temp[i],sum,i+1,ans,temp);
    
    b=division(s,sum,i+1,ans,temp);
    
    return min(abs(sum-(2*a)),abs(sum-(2*b)));
}
int main(){
    int n;
    cin>>n;
    vector<int> temp(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>temp[i];
        sum+=temp[i];
    }
    sort(temp.begin(),temp.end());
    int ans=INT_MAX;
    cout<<division(0,sum,0,ans,temp);
   // cout<<ans<<endl;
    return 0;
}