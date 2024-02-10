#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    map<char,int>mpp;
    for(int i=0;i<s.length();i++){
        mpp[s[i]]++;
    }
    string ans;
    int Oddcnt=0;
    for(auto it=mpp.begin();it!=mpp.end();it++){
        if(it->second%2==0){
            string s1,s2;
            s1.append(it->second/2,it->first);
            s2.append(it->second/2,it->first);
            ans=s1+ans+s2;
        }
        else if(Oddcnt==1){ Oddcnt++;
        break;}
        else if(Oddcnt<1){
             ans+=" ";
             int n=ans.length();
             for(int i=n-2;i>=n/2;i--){
                 ans[i+1]=ans[i];
             }
             ans[n/2]=it->first;
            string s1,s2;
            s1.append((it->second-1)/2,it->first);
            s2.append((it->second-1)/2,it->first);
            ans=s1+ans+s2;
            Oddcnt++;
        }
    }
    if(Oddcnt>1) cout<<"NO SOLUTION\n";
    else cout<<ans<<endl;
    return 0;
}