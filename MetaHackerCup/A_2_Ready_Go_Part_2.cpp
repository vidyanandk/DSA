#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int cnt;
bool valid(int i,int j,vector<vector<char>>&grid){
if(i>=grid.size()||i<0||j>=grid[0].size()||j<0||grid[i][j]=='B'||grid[i][j]=='.'){
        return 0;
    }
    return 1;
}
ll dfs(int i,int j,vector<vector<char>>&grid){
    if(i>=grid.size()||i<0||j>=grid[0].size()||j<0||grid[i][j]=='B'){
        return 0;
    }
    else if(grid[i][j]=='.'){
        // grid[i][j]='B';
           return 1e7;
    //    if(!vis[i][j]) {cnt++;
    //        vis[i][j]=1;
    //    }
    // cnt++;
    
    }
    grid[i][j]='B';
    ll a=0;
    ll b=0;
    ll c=0;
    ll d=0;
     a= dfs(i+1,j,grid);
     b= dfs(i-1,j,grid);
     c= dfs(i,j+1,grid);
     d= dfs(i,j-1,grid);
    return 1+a+b+c+d;

    // grid[i][j]='W';
}
void solve(int t,int t1){
 ll r,c;
   cin>>r>>c;
vector<vector<char>> v(r,vector<char>(c));
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cin>>v[i][j];
        
    }

}
ll ans=0;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){

cnt=0;
        if(v[i][j]=='.'){
          v[i][j]='B';  
            ll a=0;
    ll b=0;
    ll c=0;
    ll d=0;
      if(valid(i+1,j,v))  a= dfs(i+1,j,v);
      if(valid(i-1,j,v))  b= dfs(i-1,j,v);
      if(valid(i,j+1,v))  c= dfs(i,j+1,v);
      if(valid(i,j-1,v))  d= dfs(i,j-1,v);
       ll tmp = a+b+c+d;
        v[i][j]='.';
        //   cout<<tmp<<endl;
              if(tmp<1e7){
               ans=max(tmp,ans);
            
        }
        }
        

    }
}
    cout << "Case #" << t1 - t << ": " ;
    cout<<ans<<endl;
return;

}
int main (){
int t,t1;
freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
cin>>t;
t1=t;
while(t--)
{
solve(t,t1);
  
}
    return 0;
}