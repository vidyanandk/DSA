#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    cin>>a;
    int maxi=a;
    int cnt=0;
    for(int i=1;i<n;i++){
        int b;
        cin>>b;
        if(maxi<b){
            maxi=b;
            cnt=1;
        }
        else if(maxi==b) cnt++;
    }
    if(maxi==a&& cnt>=1) cout<<1;
    else if(maxi==a && cnt==0) cout<<0;
    else cout<<maxi-a+1;
    return 0;
}