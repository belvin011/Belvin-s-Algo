//GENERATION OF SUBARRAYS USING O(N**3)..!
//FOR LENGTH N THE NUMBER OF SUBARRAYS HAVE -->N*N+1/2
//INPUT
//3
//1 2 3
//OUTPUT
// 1 
// 1 2 
// 1 2 3 
// 2 
// 2 3 
// 3 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int array[n];
	for(int i=0;i<n;i++){
		cin>>array[i];
	}
	for(int i=0;i<n;i++){ //Traverse from 0 to n
		for(int j=i;j<n;j++){ //Traverse from i to n
			for(int k=i;k<=j;k++){ //Traverse from i to j for getting respectivr subarray..!
				cout<<array[k]<<" ";
			}
			cout<<"\n";
		}
	}
}