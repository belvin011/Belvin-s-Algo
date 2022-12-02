#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
const int M=1e9+7;
long long Mod(long long x){
    return ((x%M + M)%M); }
long long Add(long long a, long long b){
    return Mod(Mod(a)+Mod(b)); }
long long Mul(long long a, long long b){
    return Mod(Mod(a)*Mod(b)); }
    
int main(){

    cout<<Add(10,20)<<"\n"; 
      
}

