#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n=s.size();
        ll ans=0;
        for(ll i=0;i<n-1;i++){
            if(s[i]=='>' && s[i+1]=='<' || s[i]=='*' && s[i+1]=='*' )  {
                ans=-1;
            }
        }
    }
}