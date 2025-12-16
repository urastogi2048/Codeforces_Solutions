#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> v(2*n);
    ll k=0;
    for(ll i=0;i<n;i++) {
        ll a,b;
        cin>>a>>b;
        v[k++]={a,1};
        v[k++]={b,-1};
    }
    sort(v.begin(),v.end());
    ll ans=0,present=0;
    for(ll i=0;i<2*n;i++){
        if(v[i].second==1) present++;
        else present--;
        ans=max(ans,present);
    }
    cout<<ans<<endl;
    return 0;
}