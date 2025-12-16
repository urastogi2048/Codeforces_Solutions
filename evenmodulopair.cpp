#include <bits/stdc++.h>
using namespace std;
using ll =long long;
bool isEven(ll x) {
    return x % 2 == 0;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        bool f=false;
        for(ll i=0; i<n;i++){
            
            for(ll j=i+1;j<n;j++){
                if(isEven(a[j]%a[i])){
                    cout<<a[i]<<" "<<a[j]<<endl;
                    f=true;
                    break; 
                }
               
            }
             if(f) break;
        }
        if(!f) cout<<-1<<endl;
    }
}