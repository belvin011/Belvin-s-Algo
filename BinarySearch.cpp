//BINARY SEARCH FOR FINDING ELEMENT  INDEX..!
//11
//[1,3,4,5,8,10,12,15,16,17,18]
//8
//ANS-->4
#include<bits/stdc++.h>
using namespace std;
int Find(int array[],int k,int n){
    int low=0;
    int high=n-1;
    while(high>=low){
        int mid=(low+high)/2;
        if(array[mid]==k){
            return mid;
        }
        if(k>array[mid]){
            low=mid+1;

        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;++i){
        cin>>array[i];
    }
    int k;
    cin>>k;
    cout<<Find(array,k,n);
}