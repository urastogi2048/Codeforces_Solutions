#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n=s.size();
        ll c1=0,c2=0;
        for( ll i=0; i<n; i++){
            if(s[i]=='0'){
                c1++;
            }
            else{
                c2++;
            }
        }
        // if(c1==c2) {
        //      cout<<0<<endl;
        //      continue;
        //  }
         ll tt=0;
         ll i;
        for(i=0;i<n; i++){
            if(s[i]=='0') {
               
               if(c2>0){ c2--; tt++;}
               else break;
            }
            else if(s[i]=='1'){
             
                if(c1>0){ c1--; tt++;}
                else break;

            }
            
        }
        // if(c2>0){
        // for(ll j=i; j<n; j++){
        //     if(s[j]=='0' && c2>0) {
        //         tt++;
        //         c2--;
        //     }
           
        // }}
        // else if(c1>0){
        //     for(ll j=i; j<n; j++){
        //         if(s[j]=='1' && c1>0){
        //             tt++;
        //             c1--;
        //         }
        //     }
        // }

        


        cout<<s.size()-tt<<endl;
    }
}


