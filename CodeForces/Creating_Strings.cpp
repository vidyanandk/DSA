#include<bits/stdc++.h>
using namespace std;
void allstring(string s,set<string>&ans,int ind){
     if(ind==s.length()){
        ans.insert(s);
        return ;
     }
     for(int i=ind;i<s.length();i++){
        swap(s[i],s[ind]);
        allstring(s,ans,ind+1);
        swap(s[ind],s[i]);
     }
}
int main(){
    string s;
    cin>>s;
    set<string> ans;
    allstring(s, ans,0);
    cout<<ans.size()<<endl;;
    for(auto it:ans){
        cout<<it<<endl;
    }
    return 0;
}