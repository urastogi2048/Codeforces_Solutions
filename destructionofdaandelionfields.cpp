#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// Fast IO
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();

    // Your code here
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        ll ans=0;
        vector<ll>even;
        vector<ll>odd;
        for(int i=0; i<n; i++){
            if(a[i]%2==0) even.push_back(a[i]);
            else odd.push_back(a[i]);
        }
        if(odd.size()==0){
            cout<<0<<endl;
            continue;
        }
        sort(odd.begin(), odd.end());
        for(auto x: even) ans+=x;
        if(!odd.empty()){
        ans+=odd[odd.size()-1];
       
        odd.pop_back();}

       int l = 0, r = odd.size()-1;
         while(l<r){
              ans+=  odd[r];
              l++; r--;}
        cout<<ans<<endl;
        }
    
    return 0;
}