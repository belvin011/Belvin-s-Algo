//GENERATION OF SUBSEQUENCES USING RECURSSION..!
//INPUT
//3
//1 2 3

//OUTPUT
// 1 2 3 
// 1 2 
// 1 3 
// 1 
// 2 3 
// 2 
// 3 
// []

#include<bits/stdc++.h>
using namespace std;
void Solve(int i,int n,int array[],vector<int>&v){
	if(i==n){
		if(v.size()==0) cout<<"[]"<<"\n";
		for(auto x:v){
			cout<<x<<" ";
		}
		cout<<"\n";
		return;
	}
	v.push_back(array[i]);
	Solve(i+1,n,array,v);
	v.pop_back();
	Solve(i+1,n,array,v);
}
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	vector<int>v;
	Solve(0,n,array,v);
}