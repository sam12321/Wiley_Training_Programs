// Replace Function and Replace_if
// Raplaces  the specific element inside the data container with the given element

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

	bool operator()(const Data &d1,const Data &d2)
	{
	}
	
};


ostream& operator<<(ostream &out,vector<Data> &vec){
for(Data d:vec)
	cout<<d.id<<","<<d.marks<<endl;
return out;
}

bool fn(Data &obj)
{
return(obj.id%2==0);
}

int main()
{
	vector<Data> nums;
	nums.push_back(Data(1,10));
	nums.push_back(Data(2,20));
	nums.push_back(Data(3,30));
	nums.push_back(Data(4,40));
	nums.push_back(Data(5,50));

	vector<Data>::iterator it1=nums.begin();
	vector<Data>::iterator it2=nums.end();
	
	sort(it1,it2,compare);

	cout<<nums;

return 0;

}
