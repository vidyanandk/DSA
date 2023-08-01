#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;
// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
bool check(string &s,map<char,int>&m){
    for(auto it=m.begin();it!=m.end();it++){
        if(it->second==1) continue;
        else{
            int cnt=it->second;
                for(int i=0;i<s.length();i++){
                    if(it->first==s[i]){
                        int t=0;
                        for(int j=i+1;j<s.length()-1;j++){
                             if(s[j]=='$') t++;
                             else if(s[j]==it->first && t!=0){
                                 t=0;cnt--;
                             }
                            else if(s[j]==it->first && t==0){
                                  return false;
                            }
                            if(cnt==1) break;
                        }
                    }
                }
            
        }
    }
    return true;
}
int solution(string &s, vector<int> &c) {
    // Implement your solution here
    map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    if(m.size()==s.size()) return 0;
   
    for(int i=0;i<c.size();i++){
         s.insert(c[0],'$');
         if(check(s,m)) return i+1;
    }
    return -1;
}


int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
    }
    return 0;
}