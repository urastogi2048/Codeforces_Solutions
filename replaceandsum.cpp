#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n),b(n);
        for ( int i = 0; i < n; i++)
        {
           cin>>a[i];
        }
        for ( int i = 0; i < n; i++)
        {
           cin>>b[i];
        }
        ll m = 0;
        vector<ll> yo(n);ll k=0;
        for(ll i=n-1; i>=0; i--){
            m=max({m,a[i],b[i]});
          
            yo[i]=m;
        }
        vector<ll> mahoraga(n+1,0);
        mahoraga[0]=yo[0];
        for(ll i=0; i<n;i++){
            mahoraga[i+1]= yo[i]+mahoraga[i];
        }
        
//        sort(a.rbegin(),a.rend());
        
        while(q--){
            ll l,r,ans=0;
            cin>>l>>r;
           // ll maxx=0;
           

            
            cout<<mahoraga[r]-mahoraga[l-1]<<" ";
            
        }
        cout<<endl;


        
    }
}
