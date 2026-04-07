#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    ll t;
    cin>>t;
    while (t--){
        ll n,k;
        cin>>n>>k;
        vector<ll> a(n),p(k);
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        for(ll i=0; i<k; i++){
            cin>>p[i];
        }
        ll lc=0,rc=0;
        for(ll i=1; i<p[0] ;i++){
            if(a[i-1] !=a[i]) lc++;
        }
        for(ll i=p[0]; i<n; i++){
            if(a[i-1]!=a[i]) rc++;
        }
        ll aa=max(lc,rc);
        if(aa%2==0) {
            cout<<aa<<endl;
        }
        else cout<<aa+1<<endl;
        //cout<<aa<<endl;
    }
}