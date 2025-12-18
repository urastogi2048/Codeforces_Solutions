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
    sort(v.begin(),v.end());
    ll ans=1;
    for(auto it: v){
        if(it>ans){
            break;
        }
        ans+=it;
    }
    cout<<ans<<endl;
}