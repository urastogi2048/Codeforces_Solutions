#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s,ss;
        cin>>s;
        bool f=false;
        ss=s;
        sort(ss.begin(),ss.end());
        if(s==ss){
            f=true;
        }
        if(f==true){
            cout<<"Bob"<<endl;
            continue;
        }
        ll c1=0;
        for(ll i=0; i<n; i++){
            if(s[i]=='1')
            c1++;
        }
        vector<ll> ans;
        ll sss=n-c1;
        for(ll i=0; i<sss; i++){
            if(s[i]=='1'){
                ans.push_back(i);
            }

        }
        ll kk=ans.size();
        for(ll i=sss; i<n; i++){
            if(s[i]=='0'){
            
                ans.push_back(i);
            }
        }
        sort(ans.begin(),ans.end());
        cout<<"Alice"<<endl;
        cout<<ans.size()<<endl;
        for(ll i=0; i<ans.size(); i++){
            cout<<ans[i]+1<<" ";
        }
        cout<<endl;


    }


}