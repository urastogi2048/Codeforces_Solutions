#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld=long double;
int main (){
    int t;
    cin>>t;
    while(t--){
        ll p,q;
        cin>>p>>q;
        ld r=(ld)p/(ld)q;
        ld s=(ld)2/(ld)3;
        if(r==s){
            cout<<"Bob"<<endl;
            continue;
        }
        if(r<s || p>=q) {
            cout<<"Alice"<<endl;
            continue;
        }
        
        ll x=q-p;
        // if(p-2*x == q-3*x) cout<<"Bob"<<endl;
        // else cout<<"Alice"<<endl;
       
        cout<<p-2*x<<" "<<q-3*x<<endl;
        

    }
}