#include <iostream>
using namespace std;

int main() {
    string tt;
    cin >> tt;
    for(int i=0;i<tt.size();i++) {
        int t=tt[i]-'0';
        if(i==0 && t==9) continue;
        if(t>=5) t=9-t;
        tt[i]=t+'0';
    }
    cout << tt << endl;
    return 0;
}
