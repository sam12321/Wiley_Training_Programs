// Copy_if Function
// copies data from one ds to other based on a fucntion

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


	Data(){
	id=0;
	marks=0;
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
return out;
}

bool fn(Data &obj)
{
return(obj.id>3);
}


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
	cout<<nums;
	cout<<"copying..."<<endl;
	
	
	//copy(nums.begin(),nums.end(),nums2.begin());
	
	auto it_end=copy_if(nums.begin(),nums.end(),nums2.begin(),fn);

	cout<<"copied..."<<endl;
	cout<<"displaying nums2 : "<<endl;
	cout<<nums2;

	int siz=distance(nums2.begin(),it_end);
	cout<<"-------"<<endl;
	cout<<"distance from first to last copied : "<<siz<<endl;


return 0;

}
