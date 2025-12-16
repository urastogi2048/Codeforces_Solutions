#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fi first
#define se second
#define all(x) (x).begin(), (x).end()
#define rep(i,a,b) for(int i = (a); i < (b); ++i)

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // your code here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> b(n);
         set<int> s;
        for(int i=0; i<n ;i++){
            cin>>b[i];
            s.insert(b[i]);
        }
        cout<<s.size()<<endl;
       
    }

    return 0;
}