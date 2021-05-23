#include<iostream>
#include<vector>
using namespace std;

int main(){

vector<int> nums;
nums.push_back(10);
nums.push_back(20);
nums.push_back(30);
nums.push_back(40);
nums.push_back(50);
nums.push_back(60);

cout<<"first ele : "<<nums.front()<<endl;
cout<<"last ele : "<<nums.back()<<endl;
cout<<"size of nums : "<<nums.size()<<endl;

vector<int>::iterator it=nums.begin(); // iterator

cout<<"displaying vector nums ..."<<endl;

while(it!=nums.end()){
	cout<<*it<<endl;
	it++;
}

it=nums.begin();

while(it!=nums.end()){
	if(*it==30){
		nums.erase(it);
		cout<<"30 deleted!!..."<<endl;
	}
	it++;
}
it=nums.begin();

cout<<"displaying vector nums ..."<<endl;

while(it!=nums.end()){
        cout<<*it<<endl;
        it++;
}

it=nums.begin();

// nums.erase(nums.begin(),nums.end) // vaise -1 hota hai

// nums.clear();

// nums.empty();



return 0;
}
