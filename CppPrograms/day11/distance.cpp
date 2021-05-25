// Some operations and distance Function
// distance function - returns distance bw the two given iterators

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
	vector<Data> nums;
	nums.push_back(Data(1,10));
	nums.push_back(Data(2,20));
	nums.push_back(Data(3,30));
	nums.push_back(Data(4,40));
	nums.push_back(Data(5,50));

	int size=nums.size();
	vector<Data> nums2(size);
	cout<<"displaying nums : "<<endl;
	
	
	 int a[10]={1,2,3,4,5,6,7,8,9,10};
	 vector<int> temp(a,a+10);

	 for(int i:temp)
		 cout<<i<<",";
	 cout<<endl;

	 temp.resize(5);

	 int dis=distance(a,a+2); // tells distance between two operators
	 cout<<"distance : "<<dis<<endl;

return 0;

}
