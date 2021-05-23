// SETS

#include<iostream>
#include<vector> // Dynamic array
#include<set>

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


set<int> nums2;
nums2.insert(nums.begin(),nums.end());

set<int>::iterator it=nums2.begin();

for(int i:nums2){
cout<<i<<endl;
}

//set<int>::iterator it2=nums.find(20);

return 0;
}
