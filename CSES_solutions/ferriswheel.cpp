#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll > p(n);
    for(ll i=0;i<n;i++){
        cin>>p[i];
    }
    sort(p.begin(), p.end());
    ll i=0,j=n-1;
    ll ans=0;
    while(i<j){
        if(p[i]+p[j]<=x)  {
            ans++;
            i++;
            j--;
        }
        else{
           ans++;
           j--;
        }
    }
    if(i==j) ans++;
    cout<<ans<<endl;
}