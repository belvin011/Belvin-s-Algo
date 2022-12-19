//VECTORS IN C++
#include<bits/stdc++.h>
using namespace std;
int main(){

	vector<int>v; //Declaration of a vector..!

	v.push_back(1);  //[1]
	v.push_back(2);  //[1,2]
	v.push_back(3);  //[1,2,3]
	v.emplace_back(4);  //[1,2,3,4]
	v.emplace_back(5);  //[1,2,3,4,5]

	//Pop back function deletes the last element of the vector..!
	v.pop_back();  //[1,2,3,4]
	v.pop_back();  //[1,2,3]

	v.size();  //gives the size of vector which is 5

	cout<<v.front()<<"\n"; //Gives the first element of the vector..!
	cout<<v.back()<<"\n";  //Gives the last element of the vector..!


	//Acessing of vector elements..!
	cout<<v[0]<<"\n";
	     //or
	cout<<v.at(0)<<"\n";


	//Erasing of elements in vector..!
	v.erase(v.begin());  //erases the first element..!
	v.erase(v.begin()+1); //erases the second element..!
	v.clear();  //clears the all elements in the vector..!

	for(int i=3;i<=7;i++)
	{
		v.emplace_back(i);  //pushing elements through iterator..!
	}

	cout<<"\n";

	v.insert(v.begin(),1); //adds elemts at appropriate possition..!
	v.insert(v.begin()+1,2); //same as above..! 



        vector<int>v1={1,2,3};
	vector<int>v2={9,8,7};
	swap(v1,v2);               //Swaps the vector..!
	for(auto it:v1){
		cout<<it;
	}

	for(auto it:v)
	{
		cout<<it<<" ";  //This is iterator which prints the  all the elements of the vector..!
	}

	cout<<"\n";



	for(vector<int>::iterator it=v.begin();it!=v.end();it++){
		cout<<*it<<" ";
	}
	//Another form of iterator for printing the elenents..!

	cout<<"\n";


	for(auto it=v.rbegin();it!=v.rend();it++){
		cout<<*it<<" ";
	}
	//Reverse of vector elements..!

	cout<<"\n";
    
        //2D VECTORS..!
	vector<vector<int>>ans; //DECLARING OF 2D VECTOR..!
	for(int i=1;i<4;i++){
		vector<int>v;
		for(int j=1;j<3;j++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		ans.push_back(v);
	}
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans[i].size();j++){  //PRINTING OF 2D VECTOR..!
			cout<<ans[i][j]<<" ";
		}
		cout<<"\n";
	}


	for(auto it1:ans){
		for(auto it:it1){
			cout<<it<<" ";
		}
		cout<<"\n";
	}
}






//SET
//UNIQUE AND SORTED..!
#include<bits/stdc++.h>
using namespace std;
int main(){

	set<int>st={2,1,5,1,2,3,4,5};
	for(auto it:st){
		cout<<it<<" ";  //{1,2,5}
	}
	cout<<"\n";

	//OR
	for(auto it=st.begin();it!=st.end();it++){
		cout<<*it<<" ";
	}
	cout<<"\n";


	st.erase(1); //erases 1 from the set..!
	st.erase(st.begin());  //erases the first element from the set..!

	st.clear();

	st.insert(1); //insert elements
	st.insert(2);
	st.insert(3);
	st.insert(4);
	st.insert(5);


	auto it=st.find(5);    //finds position imp in sets..!
	cout<<*it<<"\n";  //if element not present gives last element position..!
	if(it!=st.end()){
		cout<<"present at position"<<" "<<*it;
	}
	else{
		cout<<"not found";
	}

    //UNORDERED SET 
    //UNIQUE AND NOT SORTED..!
	unordered_set<int>st;  //all operations are same and works in o(1) time complexity..!

	//MULTISET 
	//NO UNIQUE BUT SORTED..!
	multiset<int>st={1,1,2,2,10,4,6,5,5};
	cout<<st.count(2); //count the occurances..!
	for(auto it:st){
		cout<<it<<" ";  //{1,1,1,2,2,4,5,5,6,10}
	}









//MAP
//KEY,VALUE
//KEYS ARE ALWAYS UNIQUE AND IN SORTED ORDER..!
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int>mpp;
    mpp['a']=1;
    mpp['b']=2;
    mpp['c']=3;
    mpp['d']=4;
    mpp['e']=5;
    mpp.emplace('f',6);
    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<"\n";
    }

    //OR

    for(auto it=mpp.begin();it!=mpp.end();it++){
        cout<<it->first<<" "<<it->second<<" "<<"\n";
    }

    if(mpp.find('a')!=mpp.end()){
        cout<<"present"<<"\n";   //present..! 
           }
    else{
        cout<<"not presenr\n";
    }

    //unordered map
    //key,value
    //unique but not in sorted..!
    //pairing is not possible in maps
    unordered_map<char,int>mpp;

    //multimap
    //key,value
    //not unique but sorted
    multimap<char,int>mpp;
}









//STACKS-->LAST IN FIRST OUT (LIFO)
#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int>st;
	//push
	//top
	//pop
	//empty
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.emplace(5);

	cout<<st.top(); //{5}

	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}

	//stack thumb rule..!
	stack<int>st;
	cout<<st.top(); //this gives error so, always check with -->(!st.empty()) this function..!


}


//QUEUE
//QUEUE-->FIRST IN FIRST OUT AND NOT TOP FUNCTION ONLY FRONT()
#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int>qt;
	//push
	//pop
	//empty
	//front
	//back
	qt.push(1);
	qt.push(2);
	qt.push(3);
	qt.push(4);
	qt.emplace(5);

	cout<<qt.front(); //{1}

	while(!qt.empty()){
		cout<<qt.front()<<" ";
		qt.pop();
    }

	





//PRIORITY QUEUE-->LARGEST ELEMENT FIRST
//PRIORITY QUEUE MIN AND MAX HEAP..!
#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<int>pq;
	//push
	//top
	//pop
	//empty
	//front
	//back
	pq.push(1);
	pq.push(2);
	pq.push(3);
	pq.push(40);
	pq.emplace(500);

	cout<<pq.top(); //{1}

	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}



	pq.push(-1);
	pq.push(-2);
	pq.push(-3);
	pq.push(-40);
	pq.emplace(-500);
	cout<<pq.top()<<"\n";

	while(!pq.empty()){
		cout<<-1*pq.top()<<" ";  //by using negotion we can change the priority queue..!
		pq.pop();
	}


}


	



    




