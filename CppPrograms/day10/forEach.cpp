#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

ostream& operator<<(ostream &out, vector<int> &v)
{
	for(int i:v)
	cout<<i<<",";
	cout<<endl;
	return out;
}

void show(int a)
{
	cout<<"a : "<<a<<endl;
}
int main()
{
	vector<int> nums;
	for(int i=1;i<=10;i++)
		nums.push_back(i);
	cout<<nums;

	for_each(nums.begin(),nums.end(),[] (int i) { cout<<"lambda i:"<<i<<endl;});

	
return 0;
}
