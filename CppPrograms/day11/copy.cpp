// Copy Function
// copies data from one ds to other

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Data
{
	int id;
	int  marks;
	Data(int a,int marks){
		id=a;
		this->marks=marks;
	}


	Data(){ // creating default const. for nums2

	}

	bool operator==(const Data &d)
	{
		return(this->id==d.id && this->marks==d.marks);
	}

	void operator=(const Data &d)
	{
		this->id=d.id;
		this->marks=d.marks;
	}

};



ostream& operator<<(ostream &out,vector<Data> &vec){
for(Data d:vec)
	cout<<d.id<<","<<d.marks<<endl;
}

bool fn(Data &obj)
{
return(obj.marks>0&&obj.id>2);
}


int main()
{
	vector<Data> nums;
	nums.push_back(Data(1,10));
	nums.push_back(Data(2,20));
	nums.push_back(Data(1,10));
	nums.push_back(Data(4,40));
	nums.push_back(Data(5,50));

	int size=nums.size();
	vector<Data> nums2(size); // will not work without a default constructor as it's creating an empty vector
	cout<<"displaying nums : "<<endl;
	cout<<nums;
	cout<<"copying..."<<endl;
	copy(nums.begin(),nums.end(),nums2.begin()); // copy function
	cout<<"copied..."<<endl;
	cout<<"displaying nums2 : "<<endl;
	cout<<nums2;

return 0;

}
