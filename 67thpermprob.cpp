#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(3*n);
        int c=3*n -1;
        for(int i=0;i<n;i++){
            a[3*i +1] =c;
            a[3*i] = i+1;
            a[3*i +2] = c+1;
            c-=2;

        }
        for(auto it: a){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}