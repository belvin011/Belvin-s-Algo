//Bit Manipulation..!
#include<bits/stdc++.h>
using namespace std;
int main(){

	int x=0;
	int array[5]={1,2,3,2,1}; //finding element which occurs 1 time..!
	for(auto it:array){
		x^=it;
	}
	cout<<x<<"\n";

	//swapping of two numbers using xor..!
	int a=5;
	int b=7;
	cout<<a<<" "<<b<<" "<<"\n";
	a=a^b;
	b=a^b;
	a=a^b;
	cout<<a<<" "<<b<<" "<<"\n";

	//print ans of xor of 1 to n
	//int n=8;
	//xor of 1 to n which is {1,2,3,4,5,6,7,8};
	//if(n%4==0) cout<<n;
	//if(n%4==1) cout<<1;
	//if(n%4==2) cout<<n+1;
	//if(n%4==3) cout<<0;


	//xor of l to r formula
	//xor(r)^xor(l-1);

	//Finding even or odd..!
	//if(n&1!=0)->odd
	//else even

   //Finding  ith bit set or not..!
    int n=9;
    int i=3;
    if(n&(1<<i)!=0) cout<<"set";
    else cout<<"not set";


    //set ith bit if ith bit is 0
    int n=13;  //->1101
    int i=1; 
    int ans=n|(1<<i); //bit mask..!
    cout<<ans;

    //clearing ith set bit..!
    int n=15;
    int i=2;
    int ans=n&(~(1<<i));
    cout<<ans;

    //clear the last set bit..!
    int n=13;
    int ans=n&(n-1);
    cout<<ans;

    //power of 2..!
    int n=16;
    int ans=n&n-1==0;  //if ans==0 yes power of 2 else not power of 2..!
    cout<<ans;

    //count number of setbits..!
    int ans=__builtin_popcount(n);
             //or

    int n=15;
    int c=0;
    while(n!=0){
        if(n&1==1) c++;
        n=n>>1;
    }
    cout<<c;

         //or
    
    int n=15;
    int c=0;
    while(n!=0){
        n=n&n-1;
        c++;
    }
    cout<<c;


    //compliment of a number..!
    int n=5; //->101
    int number_of_all_bites=(unsigned)log2(n)+1;
    int mask=(1<<number_of_all_bits)-1;
    int ans=mask^n;
    cout<<ans; //->010

    //conversion of binary to the direct int..!
    auto num=0b1011;
	cout<<num;      //directly converts the binary number to the integer..!
}
