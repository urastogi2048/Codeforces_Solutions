// #include <bits/stdc++.h>
// using namespace std;
// using ll= long long;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//         string s;
//         cin>>s;
//         int ans=0;
//         for(int i=0;i<n;i++){
//             if(s[i]=='1'){
//                 bool f=false;
//                 for(int j=i+1;j<=i+k && j<n; j++){
//                     if(s[j]=='1') {
//                         f = true;
//                         i = j-1;
//                         break;
//                     }
                      
                    
//                 }
//                 if(f == false){
//                     i+=k;
//                 }

//             }
//             else ans++;
//         }
//         cout<<ans<<endl;
//     }
// }
// #include <bits/stdc++.h>
// using namespace std;
// using ll= long long;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//        ll n;
//        cin>>n;
//        vector<ll> a(n),b(n);
//        for(ll i=0;i<n;i++) cin>>a[i];
//        for(ll i=0;i<n;i++) cin>>b[i];
//        ll k=0;
//        ll kk=0;
//        for(ll  i=0; i<n; i++){
//           ll p= k-a[i];
//             ll q= b[i] -k;
//             ll r = kk-a[i];
//             ll s= b[i]-kk;

//           k=max({p,q,r,s});
//           kk=min({p,q,r,s});

//        }
//          cout<<k<<endl;
       
//        }
// }
#include <bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
    int t;
    cin>>t;
    while(t--){
       ll n,k;
       cin>>n>>k;
         vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];
        sort(a.begin(),a.end());
        if(a[0]==1) {
            cout<<1<<endl;
            cout<<1<<endl;
            continue;
        }
        vector<ll> ans;
        bool f = true;
        
        for(ll i=0;i<n;i++){
            ans.push_back(a[i]);
            if(a[i]%ans.back()!=0) {
                
            } 
        }
       
       
       }
}