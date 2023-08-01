#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<int> temp;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        temp.insert(x);
    }
    for(int i=1;i<=n;i++){
        if(!temp.count(i)) {
            cout<<i;
            break;
        }
    }
    return 0;
}