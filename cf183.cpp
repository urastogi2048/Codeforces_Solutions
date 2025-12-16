// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     // Your code here
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if(n%3==0) cout<<0<<endl;
//         else cout<<(3 - n%3)<<endl;
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     // Your code here
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k;
//         cin>>n>>k;
//          string s;
//         cin>>s;
//         int p=0,q=0, r=0;

//         vector<char> ans(n, '+');
//         if(n==1){
//             cout<<'-'<<endl;
//             continue;
//         }
        

//         for(int i=0; i<k; i++){
//             if(s[i]=='0') {
               
//                 p++;
                
//             }
//             else if(s[i]=='1') {
               
//                 q++;
                
                
//             }
//             else if(s[i]=='2'){
                    
//                 r++;
              
//                 }
              
            
            
            
//         }

//         for(int i=0; i<p; i++){
//             ans[i]='-';
//         }
//         for(int i=n-1; i>n-q-1; i--){
//             ans[i]='-';
//         }
//         int le = p;
//         int ri = n-q-1;
//         while(r-- ){
//             if(le<=ri){
//             ans[le]='?';
//             ans[ri]='?';
//             le++;
//             ri--;}
//             else {
//                 ans[le] = '-';
//                 ans[ri] = '-';
//                 le++;
//                 ri--;
//             }
//         }

//         for(int i=0; i<n; i++){
//             cout<<ans[i];
//         }
//         cout<<endl;
      
//     }

//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         string s;
//         cin>>s;
//         int ca = 0,cb=0;
//         for(int i=0; i<n; i++){
//             if(s[i]=='a') ca++;
//             else cb++;
//         }
//         if(ca==0 || cb == 0) {
//             cout<<-1<<endl;
//             continue;
//         }
//         if(ca>cb) {
//             int x = ca-cb;
//             int maxx = 0;
//             for(int i=0; i<n; i++){
//                 int maxcnt = 0;
//                 if(s[i]=='a'){
//                     maxcnt++;
//                 }
//                 else {
//                     maxcnt=0;
//                 }
//                 maxx = max(maxx, maxcnt);
//             }
//             if(maxx>=x) cout<<x<<endl;
//             else cout<<-1<<endl;
//         }
//         else if(ca==cb) cout<<0<<endl;
//         else {
//             int x = cb-ca;
//             int maxx = 0;
//             for(int i=0; i<n; i++){
//                 int maxcnt = 0;
//                 if(s[i]=='b'){
//                     maxcnt++;
//                 }
//                 else {
//                     maxcnt=0;
//                 }
//                 maxx = max(maxx, maxcnt);
//             }
//             if(maxx>=x) cout<<x<<endl;
//             else cout<<-1<<endl;
//         }
//     }
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ca = 0, cb = 0;
        for (char c : s) {
            if (c == 'a') ca++;
            else cb++;
        }

        if (ca == 0 || cb == 0) {
            cout << -1 << endl;
            continue;
        }

        if (ca == cb) {
            cout << 0 << endl;
            continue;
        }

        int x = ca - cb;
        int p = 0;
        unordered_map<int, int> m;
        m[0] = 0;
        int ans = INT_MAX;

        for (int i = 1; i <= n; i++) {
            if (s[i - 1] == 'a') p++;
            else p--;

            int need = p - x;
            if (m.find(need) != m.end()) ans = min(ans, i - m[need]);

            m[p] = i;
        }

        if (ans == INT_MAX || ans == n) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}
