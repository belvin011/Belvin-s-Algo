//Moree's Voting Algo..!
//Given an array find the element which apperr more than n/2 times..!
//input-> n=7
//array-->2 1 1 2 2 1 2 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	int count=0;
	int element=0;
	for(int i=0;i<n;i++){
		if(count==0){  //when count becomes zero array element changes..!
			element=array[i];
		}
		if(element==array[i]) count++;  //same element increment the count..!
		else count--;
	}
	cout<<element<<"\n";
}