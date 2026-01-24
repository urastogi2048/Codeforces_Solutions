#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200005];
int f, md;

void dfs(int nd, int par, int d) {
    if (d > md) {
        md = d;
        f = nd;
    }
    for (auto x : adj[nd]) {
        if (x != par) {
            dfs(x, nd, d + 1);
        }
    }
}

int main() {
   
    int n;
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return 0; 
    }

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    md = -1;
    dfs(1, -1, 0);

    int stnd = f;
    md = -1;
    dfs(stnd, -1, 0);

    cout << md << endl;
    return 0;
}