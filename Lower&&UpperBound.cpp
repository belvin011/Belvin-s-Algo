//Lower bound..!
//the lower bound function used to find first occurance..!
//And index position of a giver number in the array..! 
//if element present present gives it's respective position..!
//if element is not present give position of next greater elment..!

#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int>v={2,3,4,5,6,7,8,9};
	int n=v.size();
	int ind=lower_bound(v.begin(),v.end(),5)-v.begin();
	if(ind!=n and v[ind]==5)  cout<<ind<<"\n";//if true gives the position of index..!
	else cout<<-1<<"\n";
 }




//UpperBound
//the upper bound gives the last occurance of given element..!
//if element it gives the next element position..!
//if element is not present then also gives the next position..!

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v{2,3,4,5,6,7,8};
    int ind =upper_bound(v.begin(),v.end(),5)-v.begin(); //if element present gives the next element position..!
    ind--; //decrement the value for getting the respective positions..!
    if(ind>=0 and v[ind]==5) cout<<ind<<"\n";
    else cout<<-1<<"\n";
 }

