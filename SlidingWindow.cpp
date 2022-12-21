//SLIDING WINDOW ALGO FOR FINDING MAXIMUM SUM OF  SUBARRAY OFLENGTH K..!
#include<bits/stdc++.h>
using namespace std;
void Sliding_Winddow(int n,int array[],int k){
    int Max_Sum=INT_MIN;
    int Current_Sum=0;
    for(int i=0;i<n;++i){
        Current_Sum+=array[i];
        if(i>=k-1){
            Max_Sum=max(Current_Sum,Max_Sum);
            Current_Sum-=array[i-(k-1)];  //Removes 0,1,2,3.....

       }
    }
    cout<<Max_Sum;
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
    Sliding_Winddow(n,array,k);
}

//INPUT
// 5
// 1 -10 3 5 -1
// 3
//OUTPUT
//7


// 1 10 3 5 -1
// 1 10 3-->14
// 10 3 5-->18
// 3 5 -1-->7
