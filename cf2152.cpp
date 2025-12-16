// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         set<int> s;
//         for(int i=0; i<n; i++){
//             int x;
//             cin>>x;
//             s.insert(x);
//         }
//         int a = s.size();
//         cout<<2*a -1<<endl;
//     }
// }
// 
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        ll n, rk, ck, rd, cd;
        cin>>n>>rk>>ck>>rd>>cd;
        ll ans = 0;
        if (rd > rk) ans = max(ans, rd);
        else if (rd < rk) ans = max(ans, n - rd);
        if (cd > ck) ans = max(ans, cd);
        else if (cd < ck) ans = max(ans, n - cd);

        cout << ans << "\n";
    }

    return 0;
}
