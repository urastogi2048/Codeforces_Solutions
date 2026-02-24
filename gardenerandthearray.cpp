#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector< vector<ll>> m(n);
        map<ll,ll> mm;
        for(ll i=0;i<n; i++){
            ll k;
            cin>>k;

            for(ll j=0; j<k; j++){
                ll a;
                cin>>a;
                m[i].push_back(a);
                mm[a]++;
            }
        }
        string ans="No";
        for(ll i=0; i<n; i++){
            bool f=true;
            for(ll j=0;j<m[i].size(); j++){
                if(mm[m[i][j]]==1) {
                    f=false;
                    break;
                }
               
            }
             if(f) {ans="Yes"; break;}
        }
        cout<<ans<<endl;

    }
}