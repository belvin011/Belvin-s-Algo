//GENERATION OF SUBSEQUENCES USING POWER SET..!
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }

    for(int i=0;i<(1<<n);i++){ //for n it runs 2 power n times..!
        vector<int>PowerSet;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                PowerSet.push_back(array[j]);
            }
        }

        if(PowerSet.size()==0) cout<<"[]"<<"\n";
        for(auto x:PowerSet){
            cout<<x<<" ";
        }
        cout<<"\n";
    }

}
// INPUT
// 3
// 1 2 3

//OUTPUT
//[]
// 1 
// 2 
// 1 2 
// 3 
// 1 3 
// 2 3 
// 1 2 3 