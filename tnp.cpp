// #include <cmath>
// #include <cstdio>
// #include <vector>
// #include <iostream>
// #include <algorithm>
#include <bits/stdc++.h>

using namespace std;
using ll = int;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    ll n;
    cin>>n;
    vector<string> a(n);
    for( int i=0;i<n;i++){
        
        cin>>a[i];
        
        
    }
    
    ll mw;
    cin>>mw;
    vector<string> ans(300);
    ll mm=mw;
    vector<ll> rg;
    ll k=0;
    vector<ll> nw(300,0);for(auto&x:nw)x=0;
    ll nwk=0;
    for(ll i=0; i<n; i++){
        if(a[i].size()<=mw) {
            ans[k]+=a[i];
            nw[nwk]++;
            mw--;
        }
        else {
            rg.push_back(mw);
            k++;
            nwk++;
        }
    }
    for(ll i=0; i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
