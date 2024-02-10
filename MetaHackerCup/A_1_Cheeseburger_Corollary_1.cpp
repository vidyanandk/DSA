#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int i=1;
    while(t--){
        int s,d,k;
        cin>>s>>d>>k;
        int b=0;
        int ch=0;
        b=s*2+d*2;
        ch=s+d*2;
        if(b>=(k+1) && ch>=k) cout<<"Case"<<" #"<<i<<":"<<" YES"<<endl;

        else cout<<"Case"<<" #"<<i<<":"<<" NO"<<endl;

        i++;
    }
    return 0;
}