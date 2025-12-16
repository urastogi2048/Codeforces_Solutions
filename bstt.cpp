#include <bits/stdc++.h>
using namespace std;
int sqrt(int x){
    vector<int> v;
    for(int i = 1; i<x; i+= 0.0001){
        v.push_back(i);
    }
    int l =0, r = v.size()-1;
    while(l<=r){
        int m = l + (r-l)/2;
        if(v[m]*v[m]==x) return v[m];
        else if(v[m]*v[m]<x) l = m+1;
        else r = m-1;
    }
    return v[r];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

   
        int x;
        cin >> x;
        cout << sqrt(x) << endl;
   
}