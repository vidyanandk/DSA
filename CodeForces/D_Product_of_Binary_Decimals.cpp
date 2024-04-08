#include <bits/stdc++.h>
using namespace std;
bool isB(int n) {
   while(n>0){
     if(n%10>1){
       return false;
     }
        n=n/10;
   }
   return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v={10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111,10000,10001,10010,10011,10100,10101,10110,10111,11000,11001,11010,11011,11100,11101,11110,11111,100000};
       
        if(isB(n)){
            cout<<"YES"<<endl;
        }
        else{
            int x=n;
            int s=v.size();
            int i=0;
            while(i<s){
                  if(x<=1) break;
                  if(x%v[i]==0){
                    x=x/v[i];
                  } else if(x<v[i]) break;
                  else{
                    i++;
                  }
            }
            if(x<=1){
              cout<<"YES"<<endl;
            } else{
              cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
