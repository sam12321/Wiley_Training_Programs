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

cout<<"--------constant iterator-----------"<<endl;
vector<int>::const_iterator cit=nums.cbegin();
cout<<*cit<<endl;
cit++;
cout<<*cit<<endl;
//*cit=99; // will give error as cit is pointing to a constant
cout<<"--------travel in reverse----------"<<endl;
vector<int>::iterator it=nums.end()-1;
while(it!=nums.begin()-1){
	cout<<*it<<endl;
	it--;
}
/*
cout<<"---------reverse iterator--------"<<endl;
vector<int>::iterator rit=nums.rend();
while(rit!=nums.rbegin()){
	cout<<*rit<<endl;
	rit++;
}
*/
cout<<"-------using for loops--------"<<endl;
for(int &i:nums){
	i=i+12;
}

for(int i:nums){
        cout<<i<<endl;
}




return 0;
}
