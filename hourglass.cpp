#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
      ll s,k,m;
      cin>>s>>k>>m;
      ll nn=m/k;
      ll l=nn*k;
      ll tt=m-l;
      if(k>=s){
        cout<<max(0ll,s - tt) <<endl;
      }
      else{
        if(nn%2==1){
            cout<<max(0LL, k-tt)<<endl;
        }
        else{
            cout<<max(0LL, s-tt)<<endl;
        }
      }
    }
}