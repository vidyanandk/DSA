#include<bits/stdc++.h>
using namespace std;
//a|  c|  b| the order of towers
void tower_of_hanoi(int n,char a,char b,char c, vector<pair<char,char>>&ans){
     if(n==1) {
        ans.push_back(make_pair(a,b));
     return;}
     
      tower_of_hanoi(n-1,a,c,b,ans);
      ans.push_back(make_pair(a,b));

      tower_of_hanoi(n-1,c,b,a,ans);

}
int main(){
  
    int n;
    cin>>n;
    vector<pair<char,char>>ans;
    tower_of_hanoi(n,'1','3','2',ans);
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    return 0;
}