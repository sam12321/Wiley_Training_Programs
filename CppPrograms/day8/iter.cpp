/// Iterators in VEctors

#include<iostream>
#include<vector> // Dynamic array

using namespace std;

//vector<int>::iterator it=nums.begin();

int main()
{
vector<int> nums; //  10,20,30,40,50,60
nums.push_back(10);
nums.push_back(20);
nums.push_back(30);
nums.push_back(40);
nums.push_back(50);
nums.push_back(60);

vector<int>::iterator it=nums.begin(); // assigning iterator it at the begining of num
// iterator always points to base elements


while(it!=nums.end())
{
	cout<<*it<<endl;
	it++;
}
cout<<"done..."<<endl;

*it=999;
cout<<"first element changed to : "<<*it<<endl;

//---------------

it=nums.begin(); // assigning it again to begining
while(it!=nums.end())
{
       if(*it==30){
	       nums.erase(it);
	       cout<<"30 deleted!!..."<<endl;
	       break;
       }
        it++;
}
cout<<"done..."<<endl;

//it=nums.begin()
//nums.erase(it,it+3); // will erase elements from it pos till 3locations
// nums.erase(it+5); // will remove 6th element

//----------------
nums.insert(it,777);

while(it!=nums.end())
{
        cout<<*it<<endl;
        it++;
}
cout<<"element inserted..."<<endl;


return 0;
}
