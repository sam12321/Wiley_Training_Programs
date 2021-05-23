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


nums.remove(20);
cout<<nums;
cout<<"removing even numbers..."<<endl;
nums.remove_if(is_even);
cout<<"Sorting..."<<endl;
nums.sort();
cout<<nums;

return 0;
}
