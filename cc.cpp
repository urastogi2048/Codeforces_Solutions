#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
	// your code goes here
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll ans = 0;
    // if(a[0] == a[1] ) {
    //     ans+=0;
    // }
    // else if(a[0]>a[2] && n>2 ) 
    // {
    //     ans+=abs(a[1]-a[0]);
    //     a[0]=a[1];
    // }
    // else if(a[0]<a[2] && n>2)ans+=a[0];
    // else if(n==2){
    //     ans = abs(a[1]-a[0]);
    //         }
    // for(int i=1; i<n-1;i++){
    //     if(a[i]!=0) {
    //         ans+= abs(a[i-1] + a[i+1] - a[i]);
    //         a[i+1] = a[i] - a[i-1];
    //     }
        
    // }
    vector<ll> b(n,0);
    
    for(int i=0; i<n; i++){
        if(i%4 ==0) b[i]=0;
        else if(i%4==1) b[i]=a[i];
        else if(i%4==2) b[i]=b[i-1];
        else {
            b[i]=0;

        }


    }
    vector<ll> c(n,0);
    c[0]=c[1];

    for(int i=2; i<n; i++){
        if(i%4==2) c[i]=0;
        else if(i%4==1) c[i]=0;n
        else if(i%4==3) c[i]=a[i];
       
    }
    int ans1=0, ans2=0;
    for(int i=0; i<n; i++){
        ans1+= abs(a[i]-b[i]);
        ans2+= abs(a[i]-c[i]);
    }
    ans = min(ans1, ans2);
    cout<<ans<<endl;
    
}
}
