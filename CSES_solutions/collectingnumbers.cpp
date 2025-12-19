#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll ans=1;
    ll  next=2;
    ll now=1;
    // for(ll i=0; i<n; i++)
    // {
    //     bool continue_loop = true;
    //     if(v[i]==next){
    //         ans++;
    //         continue_loop = false;

    //     }
    //     else if(v[i]==now){
    //         next++;
    //         if(!continue_loop) break;
    //     }
    // } //will Go O(n^2) TC
    vector<ll> a(n,0);
    for(ll i=0; i<n;i++){
       a[v[i]-1]=1;
       if(v[i]>1&&a[v[i]-2]==0 ){
            ans++;
       }
       
    }
    cout<<ans<<endl;
}