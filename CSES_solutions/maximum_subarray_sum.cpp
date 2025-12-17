#include <bits/stdc++.h>
using namespace std;
using ll = long long;   
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=INT_MIN;
   // ll c=INT_MIN;
    ll x=0;ll y=0;
    for(ll i=0;i<n;i++){
        x+=v[i];
        ans=max(ans,x);
        if(x<0){
            x=0;

        }
    }
    cout<<ans<<endl;
}