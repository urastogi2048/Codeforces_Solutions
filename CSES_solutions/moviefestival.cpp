#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<long long, long long>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end());
    long long ans = 0, cur = 0;
    for (int i=0; i<n; i++) {
        if (cur<=v[i].second) {
            ans++;
            cur=v[i].first;
        }
    }


    cout<<ans<<endl;    
    return 0;
}