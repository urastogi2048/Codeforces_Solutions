#include <bits/stdc++.h>
using namespace std;
using ll =long long;
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
        map<ll,ll> m,mm;
        for(ll i=0;i<n;i++){
            if(i%2==1){
                m[a[i]]=1;
            }
            else m[a[i]]=0;
        }
        sort(a.begin(),a.end());
        for(ll i=0;i<n;i++){
            if(i%2==1){
                mm[a[i]]=1;
            }
            else mm[a[i]]=0;
        }
       ll d = (m[a[0]] - mm[a[0]] + 2) % 2; 
        
        for (ll i=0; i<n; i++) {
            if ((m[a[i]] - mm[a[i]] + 2) % 2 != d) {
                ans = "NO";
                break;
            }
        }
        cout <<ans<<endl;
    }
}