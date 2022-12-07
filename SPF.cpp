#include<bits/stdc++.h>
using namespace std;
int N=100000;
int SPF[100000];
void CreateSieve(){
    for(int i=1;i<=N;i++){
        SPF[i]=i;
    }
    for(int i=2;i*i<=N;i++){
        if(SPF[i]==i){
            for(int j=i*i;j<=N;j+=i){
                if(SPF[j]==j){
                    SPF[j]=i;
                }
            }
        }
    }
}
int main(){
    CreateSieve();
    int t;
    cin>>t;
    while(t--){
        int n;
         cin>>n;
         while(n!=1){
            cout<<SPF[n]<<" ";
            n=n/SPF[n];
         }
         cout<<"\n";

    }
}