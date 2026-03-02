#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int ones = 0;
        for(char c: s) if(c == '1') ones++;

        if(ones == 0){
          
            cout << ( (n + 2) / 3 ) << '\n';
            continue;
        }

        int add = 0;
        int i = 0;
        while(i < n){
            if(s[i] == '1') { i++; continue; }
            int j = i;
            while(j < n && s[j] == '0') j++;
            int len = j - i;
            bool leftBound = (i - 1 >= 0 && s[i-1] == '1');
            bool rightBound = (j < n && s[j] == '1');

            if(leftBound && rightBound){
                int undominated = max(0, len - 2);
                add += (undominated + 2) / 3;
            } else if(leftBound || rightBound){
                int undominated = max(0, len - 1);
                add += (undominated + 2) / 3;
            } else {
                add += (len + 2) / 3;
            }

            i = j;
        }

        cout << (ones + add) << '\n';
    }
}