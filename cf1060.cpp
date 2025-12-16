#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;
    cin >> t;
  
        while(t--){
            ll n;
            cin>>n;
            vector<ll> a(n);
            for(ll i=0;i<n;i++){
                cin>>a[i];
            }
            ll m = 0;
            for(ll i=0;i<n;i++){
               m = max(a[i],m);
               if(i%2==1){
                     a[i] = m;
               }
            }
            ll ans = 0;
            for(ll i=0;i<n-1; i++){
                if(i%2==0 && a[i+1]<=a[i]){
                    ans+= (a[i]-a[i+1]+1);
                    a[i] -= (a[i]-a[i+1]+1);
                }
                else if(i%2 == 1 && a[i] <=a[i+1] ){ ans+= (a[i+1]-a[i] + 1);
                    a[i+1] -= (a[i+1]-a[i] + 1);
                }
            }
            cout<<ans<<endl;
        }
    }

