#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Your code here
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(2*n, -1);
        if(n%2==0){
            for(int i=0; i<(n/2)-1; i++){
                a[i]=n-1-2*i;

            }
            a[n/2 -1] = n;
            a[n/2] =1;
            int k =1;
            for(int i=n/2+1; i<n; i++){
                a[i]= 2*k +1;
                k++;
            }
            int k1 = n-2;
            for(int i = n;i<(3*n/2)-1;i++){
               a[i] = k1;
               k1-=2;
            }
            a[(3*n/2)-1] = n;
            a[2*n-1 ] = 1;
            int k2 = 1;
            for(int i = 3*n/2; i<2*n-1;i++){
               a[i] = 2*k2;
               k2++;
            }
        }
        else {
            for(int i=0; i<n/2; i++){
                a[i] = n-2 -2*i;
            }
            a[n/2] = n;
            int k =3;
            for(int i=n/2+1; i<n-1; i++){
               a[i] = k;
               k+=2;
            }
            a[n-1] = 1;
            int k1 = n-1;
            for(int i=n; i<(3*n/2); i++){
                a[i] = k1;
                k1-=2;
            }
            a[(3*n/2)] = n;
            int k2= 2;
            for(int i = (3*n/2)+1; i<2*n; i++){
                a[i] = k2;
                k2+=2;
            }
        }
        for(auto it: a){
            cout<<it<<" ";
        } cout<<"\n";
    }

    return 0;
}