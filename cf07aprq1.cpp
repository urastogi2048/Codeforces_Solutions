#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int>a(n);
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==1) {
            cout<<"Yes"<<endl;
            continue;
        }
        if((k*n)%2 ==0  ) {
            cout<<"Yes"<<endl;
            
        }
        else cout<<"No"<<endl;


    }
}