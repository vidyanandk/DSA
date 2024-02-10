#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int m=min({a,b,c});
    int ma=max({a,b,c});
    cout<<m<<endl;
    if(m!=a&&ma!=a) cout<<a<<endl;
    else if(m!=b && ma!=b) cout<<b<<endl;
    else cout<<c<<endl;
    cout<<ma<<endl;
    cout<<endl<<a<<endl<<b<<endl<<c;
    return 0;
}