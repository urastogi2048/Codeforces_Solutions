#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    set<ll> s;
    ll ans=0;
    ll i=0,j=1;
    s.insert(a[0]);
    while(i<n && j<n){
        s.insert(a[j]) ;
        if(s.size()==j-i+1){
            ans=max(ans,j-i+1);
            j++;
        }
        else{
            i++;
            s.erase(a[i-1]);
            s.insert(a[j]);
            
        }
    }
    cout << ans << endl;
}