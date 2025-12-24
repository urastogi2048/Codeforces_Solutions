#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n),b(n,0);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll m=0;
        ll id=0;
        for(ll i=0; i<n-1;i++){
            b[i]=abs(a[i]-a[i+1]);
            m+=b[i];
            // m=max(m,b[i]);
            // if(m==b[i]) id=i;

        }
        ll ans=m;
        for(ll i=0;i<n;i++){
            id=m;
            if(i==0) {
                id-=b[0];
            }
            else if(i==n-1){
                id-=b[n-2];
            }
            else{
                id-=b[i-1];
                id-=b[i];
                id+=abs(a[i+1]-a[i-1]);
            }
            ans=min(ans,id);
        }
        // a.erase(a.begin()+id+1);
        // ll ans=0;
        // for(auto x:a){
        //     ans+=x;
        // }
        // for(ll i=0;i<n;i)

        cout<<ans<<endl;
        
    }
}