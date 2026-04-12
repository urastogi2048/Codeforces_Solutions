#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;vector<ll>b(n);
        ll sum=0,c=0;
        for(ll i=0;i<n;i++){
            cin>>b[i];
            sum+=b[i];
            if(b[i]==0) c++;
        }
        sort(b.rbegin(),b.rend());
        ll ans=0;
        // while(n && sum>-n){
        //     sum-=n;
        //     n--;
        //     ans++;
        // }
        ans =min(n-c, sum -n+1);
        cout<<ans<<endl;
    }
}  