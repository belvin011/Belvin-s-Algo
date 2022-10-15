//GENERATION OF PRIMES USING SIEVE OF ERATOSTHENES O(N*LOG(LOG(N)))
#include<bits/stdc++.h>
using namespace std;
int N=10000000;
bool Sieve[100000000];
void CreateSieve(){
    for(int i=2;i<=N;i++){
        Sieve[i]=true;
    }
    for(int i=2;i*i<=N;i++){
        if(Sieve[i]==true){
            for(int j=i*i;j<=N;j+=i){ //Makes All Multiples As False
                Sieve[j]=false;
            }
        }

    }
}

int main(){
    CreateSieve(); //Creates Sieve(MY BLACK BOX)
    int t;
    cin>>t;
    while(t--){ //Test Cases
        int n;
        cin>>n;
        if(Sieve[n]==true) cout<<"Prime"<<"\n";
        else cout<<"Not Prime"<<"\n";

    }
}

//TEST CASES
//3
//2-->Prime
//5-->Prime
//100-->Not Prime