//FING MAXIMUM SUM SUBARRAY..!
// 5
// 1 2 3 -2 5-->ANS=9(1+2+3-2+5)
// 4
// -1 -2 -3 -4-->ANS=-1(-1)
#include<bits/stdc++.h>
using namespace std;
int Kadanes_Algo(int array[],int n){
    long long sum=0;
    long long maxi=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=array[i];
        maxi=max(sum,maxi);
        if(sum<0) sum=0;//make 0 when sum<0 main case in kadanees..!  
    }
    return maxi;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<Kadanes_Algo(arr,n)<<"\n";
    }
}