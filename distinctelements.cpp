#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n),b(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        ll diff=0;
        ll ideal=1;
        ll count=1;
        b[0]=a[0];
        ll diffprev=0;
        int next=1;
        for(ll i=1; i<n; i++){
            count++;
            ideal+=count;
            
            diff = ideal-a[i];
            
            if(diff==diffprev){
                next++;
                b[i]=next;

            }
            else {
               // b[i]=b[i-1];
               b[i]=b[(diff-diffprev-1)];
            }
            diffprev=diff;

           


        }   
        for(ll i=0;i<n;i++) cout<<b[i]<<" ";
        cout<<endl;
    }
}