#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<int> s(t);
    for(int i=0;i<t;i++){
        cin>>s[i];
    }
    queue<int> q;
    set<int> temp;
    int cnt=0;
    for(int i=0;i<t;i++){
        if(!temp.count(s[i])){
            temp.insert(s[i]);
            q.push(s[i]);
            // cnt++;
        }
        else{
            int n=q.size();
            cnt=max(cnt,n);
            while(q.front()!=s[i])
           {
             temp.erase(q.front());
             q.pop();
           }
            temp.erase(q.front());
            q.pop();
            temp.insert(s[i]);
            q.push(s[i]);
        }
    }
    int n=q.size();
    cnt=max(cnt,n);
    cout<<cnt;
    return 0;
}