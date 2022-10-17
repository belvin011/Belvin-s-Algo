//Euclidean algorithm
#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
	if(b==0) return a;
	return GCD(b,a%b);
}
int main(){
	int a,b;
	cin>>a>>b;
	int gcd=GCD(a,b); //Calling Function..!
	int lcm=a*b/gcd;  //formulae for calculation of lcm..!
	cout<<gcd<<" "<<lcm;
}

//we can simply find gcd in c++ by using below functio..!
// int a=12;
// int b=13;
// int gcdans=__gcd(a,b);//gcd answer..!
// int lcmans=a*b/gcdans;// lcm answer..!
