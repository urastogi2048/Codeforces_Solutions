#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of processes ";
    cin>>n;
    vector<int> bt(n),p(n),ct(n),tat(n),wt(n);
    for(int i=0;i<n;i++){
        cout<<"enter burst time of process "<<i+1<<" ";
        cin>>bt[i];
        p[i]=i+1;
    }
    for(int i=0;i<n; i++){
        for(int j=i+1;j<n;j++){
            if(bt[i]>bt[j]){
                swap(bt[i],bt[j]);
                swap(p[i],p[j]);
            }
        }
    }
    wt[0]=0;
   
    ct[0]=bt[0];
    tat[0]=ct[0];
    for(int i=1;i<n;i++){
        wt[i]=wt[i-1] + bt[i-1];
        ct[i]=bt[i]+wt[i];
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