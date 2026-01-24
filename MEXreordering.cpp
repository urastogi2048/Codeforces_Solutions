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
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        string ans="YES";
        sort(a.begin(),a.end());
        
        for(ll i=0; i<n; i++){
            ll mexa=0; ll mexb=0;
            for(ll j=0; j<=i; j++){
                if(a[j]==mexa ) {
                    mexa++;

                }

            }
            for(ll j=i+1; j<n; j++){
                if(a[j]==mexb){
                  mexb++;
                }

            }
            if(mexa==mexb){
                ans="NO";
                break;
            }
        }
        cout<<ans<<endl;
    }
}
