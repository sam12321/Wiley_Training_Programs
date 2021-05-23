// Lists 
// Has Linked List implementationi
// Doubled Linked List
#include<iostream>
#include<list>
using namespace std;

void operator<<(ostream &out,list<int> lst)
{
	for(int i:lst)
		cout<<i<<endl;
}

bool is_even(int i){
if(i%2==0)
	return true;
else
	return false;
}

int main()
{
list<int> nums;

nums.push_back(10);
nums.push_back(5);
nums.push_back(20);
nums.push_back(15);
nums.push_back(9);
nums.push_back(19);

cout<<nums;

list<int> nums2;
//nums2.insert(10);
cout<<"Inserting elements..."<<endl;
nums2.push_back(10);
nums2.push_back(20);
nums2.push_back(30);
nums2.push_back(40);
nums2.push_back(50);

list<int>::iterator it=nums.begin();

list<int>::iterator nm=nums.begin();
list<int>::iterator nm2=nums.end();
nums.insert(it,nm,nm2); // inserts all elements of nums2 in nums
cout<<nums;
return 0;
}
