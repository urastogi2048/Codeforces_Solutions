#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    map<ll,ll> m;
    
    for(ll i=0;i<n;i++)
    {
        ll a;
        cin>>a;
        v[i]=a;
        m[a]=i;
    }
    
    for(ll i=0; i<n; i++)
    {
       ll b=x-v[i];
         if(m.find(b)!=m.end() && m[b]!=i)
         {
              cout<<i+1<<" "<<m[b]+1<<endl;
              return 0;
         }
        
    }
    cout<<-1<<endl;
    
    
}