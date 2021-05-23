// Lists 
// Has Linked List implementationi
// Doubled Linked List
#include<iostream>
#include<list>

using namespace std;

int main()
{
list<int> nums;

for(int i=1;i<=10;i++)
{
nums.push_back(i*10);
}

cout<<"size:"<<nums.size()<<endl;
nums.push_front(5); // inserts at beginning
nums.pop_front(); // removes last ele | pop_back same but deletes last
for(int e:nums)
{
	cout<<e<<endl;
}

cout<<"-------List Iterator-----------"<<endl;

list<int>::iterator it=nums.begin();

cout<<*it<<endl;
//it=it+3;// will not work | will work in vectors

advance(it,3); // used to go to next 3rd element | made for lists
cout<<*it<<endl;

it=nums.begin();
advance(it,nums.size()-1); // goes to last node
cout<<*it<<endl;

nums.erase(it); // removing last element
cout<<"-------displaying  elements--------"<<endl;
for(int e:nums)
{
        cout<<e<<endl;
}

nums.erase(nums.begin(),nums.end()); // erasing completely
cout<<"-------erasing list--------"<<endl;
for(int e:nums)
{
        cout<<e<<endl;
}

return 0;
}
