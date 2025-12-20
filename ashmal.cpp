#include <bits/stdc++.h>
using namespace std;
using ll = long long;   
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<string> a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        string s=a[0];
        for(ll i=1;i<n;i++){
            string aage=a[i]+s;
            string peeche=s+a[i];
            if(aage<peeche){
                s=aage;
            }
            else{
                s=peeche;
            }
            
        }
        cout<<s<<endl;  
    }
}