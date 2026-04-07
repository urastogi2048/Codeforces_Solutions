#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='*'&&s[i+1]=='*') ans=-1;
            if(s[i]=='>'&&s[i+1]=='<') ans=-1;
            if(s[i]=='>'&&s[i+1]=='*') ans=-1;
            if(s[i]=='*'&&s[i+1]=='<') ans=-1;
        }
        if(ans==-1){
            cout<<ans<<endl;
            continue;
        }
        int mx=0;
        int cs=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='>' || s[i]=='*')cs++;
            else cs=0;
            mx=max(mx,cs);

        }
        cs=0;
         for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='<' || s[i]=='*')cs++;
            else cs=0;
            mx=max(mx,cs);

        }
        cout<<mx<<endl;
        
    }

    
}