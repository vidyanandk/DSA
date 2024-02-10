#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long sum=n*(n+1)/(long long)2;
    if(sum%2!=0) cout<<"NO";
    else{
        set<int>s1;
         set<int>s2;
        long long temp=0;
        for(int i=n;i>=1;i--){
            if(temp+i<=sum/2) {temp+=i;s1.insert(i);}
             else s2.insert(i);
        }
        cout<<"YES\n";
        cout<<s1.size()<<endl;
        for(auto t:s1){
            cout<<t<<" ";
        }
        cout<<endl<<n-s1.size()<<endl;
        for(auto t:s2){
            cout<<t<<" ";
        }

    }
    return 0;
}