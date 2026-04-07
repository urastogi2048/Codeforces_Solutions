#include <bits/stdc++.h>
using namespace std; 
using ll = long long;
int main (){
    ll t;
    cin>>t;
    while (t--){
        ll n,m,a,b;
        cin>>n>>m>>a>>b;
        if(a==b && a==1) {
            cout<<"YES"<<endl;
            continue;
        }
        if(__gcd(a,n)==1 && __gcd(b,m)==1 && __gcd(n,m)<=2 ) {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}