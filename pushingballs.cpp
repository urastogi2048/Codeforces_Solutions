#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
       
        bool ans = true;
        vector<vector<char>> a(n, vector<char> (m,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>a[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(a[i][j]=='1') {
                     bool f= true;
                     bool ff = true;
                    for(int k = 0; k < i; k++ ){
                        if(a[k][j] == '0' ) {
                            f = false;
                            break;
                        }
                    }
                    for(int k = 0; k < j; k++ ){
                        if(a[i][k] == '0' ) {
                            ff = false;
                            break;
                        }
                    }
                    if((f || ff)==false)  {
                        ans = false;
                        break;
                    }
                    //else ans = true;
                }
            }
        }
        if(ans == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}