// Ranged for loops

#include<iostream>
#include<vector> // Dynamic array

using namespace std;

int main()
{
vector<int> nums;
nums.push_back(10);
nums.push_back(20);
nums.push_back(30);
nums.push_back(40);
nums.push_back(50);
nums.push_back(60);

#if 0
for(vector<int>::iterator it=nums.begin(); it!=nums.end();it++)
{
	*it =99;
}
#endif

for(int &i:nums){
	i=i+12;
}

for(int i:nums){
        cout<<i<<endl;
}




return 0;
}
