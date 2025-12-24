#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        int psize = (1 << n);
        vector<int> a;
        vector<bool> used(psize, false);

        int current = psize - 1;
        while (true) {
            a.push_back(current);
            used[current] = true;
            if (current == 0) break;
            current >>= 1;
        }

        for (int i = 0; i < psize; i++) {
            if (!used[i]) {
                a.push_back(i);
            }
        }

        for (int i = 0; i < psize; i++) {
            cout << a[i] << (i == psize - 1 ? "" : " ");
        }
        cout << "\n";
    }
    return 0;
}