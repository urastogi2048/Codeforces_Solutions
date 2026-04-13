#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main (){
    ll t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        if(x==1 && k==2) {
            cout<<"YES"<<endl;
            continue;
        }
        if(k>1 || x==1) {
            cout<<"NO"<<endl;
            continue;
        }
        
        if(x<=3) {
            cout<<"YES"<<endl;
            continue;
        }
        if(x%2 ==0 || x%3==0) {
            cout<<"NO"<<endl;
            continue;
        }
        ll f=0;
        for(ll i=5;i*i<=x; i++){
            if(x%i==0) {
                f=1;break;
            }
        }
        if(f) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

        
    }
}