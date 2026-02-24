#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        ll ans=0;
        for(ll i=0;i<n;i++) cin>>a[i];
        unordered_set<ll> s;
        for(ll i=1; i<60; i++){
            ll k= 1LL<<i;
            for(auto&it: a){
                s.insert(it%k);
 
            }
            if(s.size()==2){
                ans=k;
            }
        }
        cout<<ans<<endl;
    }
}