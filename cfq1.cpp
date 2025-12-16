// #include <bits/stdc++.h>
// using namespace std;

// #define fastio ios::sync_with_stdio(false); cin.tie(0);
// #define ll long long
// #define pb push_back
// #define all(x) (x).begin(), (x).end()
// #define sz(x) ((int)(x).size())
// int main(){
//     fastio;
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int win  = n;
//         int los = 0;
//         int ans =0;
//         while(true){
//             int f;
//             ans += win/2 + los/2;
//             if(win==1 && los==1) break;

//             if(win%2==1){ win = win/2+1;
//                  f =1;
//             }
//             else {
//                 win = win/2;
//                 f =0;
            
//         }
//         if(los%2 ==1) 
//         {
//             los = los/2 + 1;

//         }
//         else {
//             los = los/2;
//         }
//         if(f==1) los+= win-1;
//         else los+= win;

//         }
//         cout<<ans+1<<endl;
//       }
// }
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
int main(){
    fastio;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<vector<char>> a(n, vector<char>(n,'0'));
        if((n*n)-k <2 && (n*n)-k !=0 ){
            cout<<"NO"<<endl;
            continue;
        }
        else cout<<"YES"<<endl;
        int p = k;
        int f =0;
        int x = 0,y=0;
        for(int i=0; i<n; i++)
        {

        for (int j=0; j<n; j++)
            {
                if(p>0) a[i][j] = 'U';
                p--;

                if(p==0) 
                {
                    x = i;y=j;
                    break;
                } 

                

            }

        }
        if(x!=n-1){
        for(int i=x; i<n; i++){
            
            for(int j=0; j<n; j++){
               if(a[i][j]=='U') continue;
               if(i != n-1) {
                a[i][j] = 'D';
               }
               else {
                if(j==n-1) a[i][j] = 'L';
                else a[i][j] = 'R';
               }
            }
            

        }}
        else {
            for(int j = y+1; j<n; j++){
                a[n-1][j] = 'R';
                a[n-1][n-1] = 'L';
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j];
            }
            cout<<endl;}
        
      }
}