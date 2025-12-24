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
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll ans=max(a[0],a[1]-a[0]);
    
    cout <<ans  << endl;
}}