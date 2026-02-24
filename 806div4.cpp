#include <bits/stdc++.h>
using namespace std;
using ll =long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll> v;
        for(ll i=0;i<n;i++){
            if(i+1>a[i]){
                v.push_back(i+1);
            }
        }
        ll ans=0;
        for(ll j=0;j<v.size(); j++){
            ans = ans + (lower_bound(v.begin(), v.end(), a[v[j]-1]) - v.begin());
        }
        cout<<ans<<endl;
        
         

    }
}