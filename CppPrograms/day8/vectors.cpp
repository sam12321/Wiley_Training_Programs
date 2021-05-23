/// Vectors

#include<iostream>
#include<vector> // Dynamic array

using namespace std;

void operator<<(ostream &out, vector<int> &v)
{
for(int i=0;i<v.size();i++)
	cout<<v[i]<<",";
	cout<<endl;
}


int main()
{
vector<int> nums;
nums.push_back(10);
nums.push_back(20);
nums.push_back(30);
nums.push_back(40);
nums.push_back(50);
nums.push_back(60);

cout<<nums.size()<<endl; // gets the size

cout<<nums[2]<<endl; // gets element at that index

cout<<nums.at(5)<<endl; // gets element if index is within limits
nums.pop_back();
cout<<nums.front()<<endl; // prints first element

cout<<nums.back()<<endl; // prints last element


cout<<"---------"<<endl;

return 0;
}
