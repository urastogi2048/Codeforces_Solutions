#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> a(n);
        bool odd = false;
        for(ll i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]%2) odd = true;
            
        }
        if(odd) cout<<2<<endl;
        else {
            vector<int> primes = {3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
            bool zehaha = false;
            ll ans = -1;
            ll f = 0;
            for(auto p: primes) { 
                int ff  =1;  
                
                for(ll i=0;i<n;i++) {
                    if(a[i]%p!=0) {
                        zehaha  = true;
                        ans = p;
                        
                        break;
                    }
                }
                if(zehaha) break;

               
            }
            cout<<ans<<endl;
           
        }



        

        

        
    }
   
    }
// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
 
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n,k,x;
//         cin>>n>>k>>x;
//         vector<ll> a(n);
//         for(ll i=0;i<n;i++) {
//             cin>>a[i];
           
//         }






        

        

        
// //     }
   

