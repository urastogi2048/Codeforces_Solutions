#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    
    
    
    ll t;cin>>t;
    while(t--){
        
        
        
        ll n,m,h,bi,ci;cin>>n>>m>>h;
        bool f=false;
        vector <ll> a(n),b(m);
        vector<pair<ll,ll>> v; for(auto &it:a) cin>> it;
        ll p=m;
        while(p--){
            
            
            cin>>bi>>ci;
            v.push_back({bi,ci});
        }
        for(ll i=m-1;i>=0;i--){
            
            if( a[v[i].first-1]+v[i].second>h) break;
            else a[v[i].first-1]+=v[i].second;
        }
        for(auto it: a)cout<<it<<" ";
        cout<<endl;
        }
    }
