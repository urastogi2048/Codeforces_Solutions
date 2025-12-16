#include <bits/stdc++.h >
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string p,s;
        cin>>p>>s;
        ll n=p.size();
        ll m=s.size();
        if(n>m){
            cout<<"NO"<<endl;
            continue;
        }
        vector<ll> w,v;
        ll c=0;
        for(ll i=0;i<p.size();i++){
            if(p[i]=='L' ){
                if(i-1>=0 && p[i-1]=='R'){
                    w.push_back(c);
                    c=1;
                }
                else {
                    c++;
                }
            }
            else{
                if(i-1>=0 && p[i-1]=='L'){
                    w.push_back(-c);
                    c=1;
                }
                else{
                    c++;
                }
            }
        }
        if (!p.empty()) {
            if (p.back() == 'L') w.push_back(-c);
            else w.push_back(c);
        }
        c=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='L' ){
                if(i-1>=0 && s[i-1]=='R'){
                    v.push_back(c);
                    c=1;
                }
                else{
                    c++;
                }
            }
            else{
                if(i-1>=0 && s[i-1]=='L'){
                    v.push_back(-c);
                    c=1;
                }
                else{
                    c++;
                }
            }
        }
        if (!s.empty()) {
            if (s.back() == 'L') v.push_back(-c);
            else v.push_back(c);
        }
        if(w.size()!=v.size()){
            cout<<"NO"<<endl;
            continue;
        }
        bool f=true;
        for(ll i=0;i<w.size();i++){
            if(w[i]*v[i]<0 || 2*abs(w[i])<abs(v[i]) || abs(w[i])>abs(v[i])){
                f=false;
                break;
            }
                
        }
        if(f)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }
}