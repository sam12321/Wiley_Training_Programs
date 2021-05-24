#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Data
{
	int id;
	Data(int a){
		id=a;
	}

};


ostream& operator<<(ostream &out, vector<Data> vd)
{
	for(int i:v)
	cout<<i<<",";
	cout<<endl;
	return out;
}

int main()
{
	vector<Data> nums;
	nums.push_back(Data(1));
	nums.push_back(Data(2));
	nums.push_back(Data(3));
	nums.push_back(Data(4));
	nums.push_back(Data(5));

	Data d(2);
	for_each(nums.begin(),nums.end(),d);

	auto it=find(nums.begin(),nums.end(),d
	
return 0;
}
