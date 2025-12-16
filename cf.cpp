// #include <bits/stdc++.h>
// using namespace std;

// #define fastio ios::sync_with_stdio(false); cin.tie(0);
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define sz(x) ((int)(x).size())

// int main() {
//     fastio;
//     // Your code here
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         vector<int> a(n);
//         int ans =0;
//         for(int i=0; i<n;i++){
//             cin>>a[i];
//         }
//         int c1 = 0, c0=0;
//         for(int i=0; i<n; i++){
//             if(a[i]==-1) c1++;
//             else if(a[i]==0) c0++;
//         }
//         ans+=c0;
//         if(c1%2==1) ans+=2;
        
//         cout<<ans<<endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// #define fastio ios::sync_with_stdio(false); cin.tie(0);
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define sz(x) ((int)(x).size())

// int main() {
//     fastio;
//     // Your code here
//     int t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         vector<ll> a(n);
//         ll ans =0;

//         for(int i=0; i<n;i++){
//             cin>>a[i];
//         }
//         if(n==2){
//             cout<<abs(a[0]-a[1])<<endl;
//             continue;
//         }
//         int ans1=0,ans2=0;
//         sort(all(a));
//         for(int i=0; i<n-1; i+=2){
//             ans = max(ans, abs(a[i]-a[i+1]));
//         }
       
        

//         cout<<ans<<endl;
        
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        ll ans = 0;
        int b1 = 0, b2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == k) b1++;
        }
        sort(all(a));

        vector<int> present(k, 0);
        for (int i = 0; i < n; i++) {
            if (a[i] < k) present[a[i]] = 1;
        }
        for (int i = 0; i < k; i++) {
            if (!present[i]) b2++;
        }

        if (k == n) ans = b2;
        else ans = max(b1, b2);

        cout << ans << '\n';
    }
    return 0;
}
if(i!=n-1 && (a[i][j-1]=='U') && p==0 && j-1 ) {
                    for(int k = j; k<n;k++){
                        a[i][k] = 'D';
                    }
                    f=1;
                    break;


                }
                else if(i==n-1 && a[i][j-1]=='U' && p==0 && j-1){
                    
                    a[i][j] = 'R';
                    for(int k = j+1;k<n;k++){
                        a[i][k] = 'L';
                    }
                    
                }
            