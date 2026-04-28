#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t,time=0;
    cout<<"Enter number of processes ";
    cin>>n;
    vector<int> bt(n),p(n),
    ct(n),tat(n),wt(n),rem(n),btc(n);
    for(int i=0;i<n;i++){
        cout<<"enter burst time of process "<<i+1<<" ";
        cin>>bt[i];
        rem[i]=bt[i];
        btc[i]=bt[i];
        p[i]=i;
    }
    wt[0]=0;
    cout<<"Enter time quantum: ";
    cin>>t;
    while(true){
        bool isdone=true;
        for(int i=0;i<n;i++){
            if(rem[i]>0) {
                isdone=false;
                if(rem[i]>t){
                    time+=t;
                    rem[i]-=t;
                    
                }
                else {
                    time+=rem[i];
                    wt[i]=time-bt[i];
                    rem[i]=0;
                    

                }
            }
        }
        if(isdone) break;
    }
   
    ct[0]=bt[0];
    tat[0]=ct[0];
    for(int i=1;i<n;i++){
        wt[i]=wt[i-1] + btc[i-1];
        ct[i]=btc[i]+wt[i];
        tat[i]=ct[i]-p[i];
    }
    cout<<"waiting time:     ";
    for(int i=0;i<n; i++){
        cout <<wt[i]<<" ";
    }
    cout<<endl;
    cout<<"turn around time: ";
    for(int i=0;i<n; i++){
        cout <<tat[i]<<" ";
    }
    cout<<endl;
    cout<<"complete time:    ";
    for(int i=0;i<n; i++){
        cout <<ct[i]<<" ";
    }
    cout<<endl;


}