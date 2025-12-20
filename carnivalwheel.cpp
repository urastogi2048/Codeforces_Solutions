#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
   ll t;
   cin >>t;
   while(t--){
      ll l,a ,b;
      cin>>l>>a>>b;
        ll ans=0;
        ll k=0;
        set<ll> s;
        while(true){
            //ll prevans=ans;
            ans=max(ans,(a+k*b)%l);
            s.insert((a+k*b)%l);
            if(s.size()<k+1){
                break;
            }
            k++;
        }
        cout<<ans<<endl;
   }
}