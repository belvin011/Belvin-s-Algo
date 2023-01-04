#include<bits/stdc++.h>
#define Mod 100000007
#define ll long long int
#define prec(n) fixed<<setprecision(n)
#define sort(v) sort(v.begin(),v.end())
#define reverse(v) reverse(v.begin(),v.end())
using namespace std;
int max(int a,int b){if(a>b) return a; else return b;}
int min(int a,int b){if(a<b) return a; else return b;}  
int gcd(int a,int b) { if (a == 0) return b; return gcd(b%a, a);}
bool isPrime(int N){ for(int i=2;i*i<=N;++i){if(N%i==0) return false;}return true;}
int fpow(int n, int k, int p) {int r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n%p; n = n * n%p;} return r;} 

int main(){ int t; cin>>t; while(t--) {  }
   
}
