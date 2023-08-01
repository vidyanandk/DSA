#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int cnt=1;
    int ans=1;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
           cnt++;
           ans=max(ans,cnt);
        }
        else{
            cnt=1;
        }
    }
    cout<<ans;
    return 0;
}