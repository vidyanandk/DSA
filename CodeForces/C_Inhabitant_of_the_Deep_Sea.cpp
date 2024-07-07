// #include <bits/stdc++.h>
// using namespace std;

// #define mod 1000000007
// typedef long long ll;

// int main()
// {
//     int tt;
//     cin >> tt;
//     while (tt--)
//     {
//         ll n,k;
//         cin >> n >> k;
//         vector<ll> a(n);
//         for (int i = 0; i < n; i++)
//             cin >> a[i];
        
//         ll i=0;
//         ll j=n-1;
//         ll ans=0;
//         while(i<=j && k>0){
//            ll x=(k+1)/2;
//            ll y=k-x;
//            int pi=i;
//            int pj=j;
//            if(a[i]<=x){
//                ans++;
//                k-=a[i];
//                i++;
//            }else{
//              if(a[pi]>x && a[pj]>y){
//                 a[i]-=x;
//                 k-=x;
//              }else if(a[pi]>x && a[pj]<=y){
//                  a[i]-=a[pj];
//                     k-=a[pj];

//              }
//             // else (a[pi]<=x && a[pj]>y){
                    
//             //  }

//             //    k-=min(a[j],x);
//             //    a[i]-=min(a[j],x);;
//            }
           
//            if(a[j]<=y){
//              ans++;
//                 k-=a[j];
//                 j--;

//            }else{
//             //    k-=min(a[i],x);
//             //    a[j]-=y;
//             if(a[pi]>x && a[pj]>y){
//                 a[i]-=;
//                 k-=x;
//              }else if(a[pi]>x && a[pj]>y){
//                  a[i]-=a[pj];
//                     k-=a[pj];

//              }
//            }
//         }

//         cout<<ans<<endl;
//     }
//     return 0;
// }






#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        ll n,k;
        cin >> n >> k;
        vector<ll> a(n);
        ll sum=0;
        for (int i = 0; i < n; i++)
           { cin >> a[i];
            sum+=a[i];}
        
        ll i=0;
        ll j=n-1;
        ll ans=0;
        if(sum<=k){
            cout<<n<<endl;
            continue;
        }else{
             while(i<=j && k>0){
          int mini=min(a[i],a[j]);
          int x=(k+1)/2;
          int y=k-x;
          if(a[i]==mini){
            if(a[i]<=x && i<=j){
                ans++;
                k-=a[i];
                if(a[j]<=y && i!=j){
                    a[j]-=a[i];
                    k-=a[i];
                    if(a[j]==0){
                    ans++;
                    j--;}
                }else{
                    a[j]-=a[i];
                    k-=a[i];
                }
                i++;
            }else{
                a[i]-=y;
                k-=y;
                a[j]-=y;
                k-=y;
            }

          }else{
             if(a[j]<=y && i<=j){
                ans++;
                k-=a[j];
               
                if(a[i]<=y && i!=j){
                    k-=a[j];
                    a[i]-=a[j];
                    if(a[i]==0){
                    ans++;
                    i++;}
                }else{
                    a[i]-=a[j];
                    k-=a[j];
                }
                 j--;
             }else{
                a[j]-=y;
                k-=y;
                a[i]-=y;
                k-=y;
             }
          }

        }
        }
       

        cout<<ans<<endl;
    }
    return 0;
}