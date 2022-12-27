//Calculatin power of numbers in O(logn) Time complexity..!
//2 power 3-->8192
#include<bits/stdc++.h>
using namespace std;
int FindPower(int base,int n){
    int res=1;
    while(n){
        if(n%2!=0){  //if n is odd reduce n and multiply result with base..!
            res=res*base;
            n--;
         }
        else{
            base=base*base;
            n=n/2;
         }
    }
    return res;
}

//The code for modulo operation(for calculation of big integers)..!
// int power(int base,int n,int modulo)
//     while(n){
//         if(n%2!=0){  
//             res=(res*base)%modulo;
//             n--;
//         }
//         else{
//             base=(base*base)%modulo;
//             n=n/2;
//         }
//     }
//     return res;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<FindPower(a,b)<<"\n";

    //cout<<pow(a,b); //This simple function also work in same time complexity..!
}
