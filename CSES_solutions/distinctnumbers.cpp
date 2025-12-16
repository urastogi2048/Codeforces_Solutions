
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll n;
    cin >> n;
    set<ll>d;
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        d.insert(x);
    }
    cout << d.size() << endl;
    return 0;
}