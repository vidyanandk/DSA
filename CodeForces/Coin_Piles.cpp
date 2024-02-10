#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        int a,b;
        cin>>a>>b;
        while(a>=1 && b>=1){
            if(a>b){
                a-=2;
                b-=1;
            }
            else{
                b-=2;a-=1;
            }
        }
        if((a==0 &&b!=0) || (b==0&&a!=0)) cout<<"NO"<<endl;
        else cout<<"YES\n";
        n--;
    }
    return 0;
}