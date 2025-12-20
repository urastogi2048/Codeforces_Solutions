#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){ 
        ll n,k;
        cin>>n>>k;
        vector<ll> v(k);
        if(k%2==1){
            for(ll i=0;i<k;i++){
                v[i]=n;
            }
           
        }
        else {
            for(ll i=2;i<k;i++){
                v[i]=n;
            }
            ll summ=0;
            ll a,b;
            ll fa,fb;
            for( a=0; a<=n;a++){
                b=n^a;
                if(b<n ) {
                    summ=max(summ,a+b);
                    if(summ==a+b){
                        fa=a;
                        fb=b;
                    }
                }
            }
            v[0]=fa;
            v[1]=fb;
        }
        for(ll i=0;i<k;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
}}