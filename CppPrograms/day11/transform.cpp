// Transform Function
// performs a fn on each element and store them in a new container
// syntax: transform(nums.begin(),nums.end(),nums2.begin(),fn)

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


Data& set_smthn(Data &d)
{
if(d.id%2==0)
	d.marks=0;
else
	d.marks=1;
return d;
}

int main()
{
	vector<Data> nums;
	nums.push_back(Data(1,10));
	nums.push_back(Data(2,20));
	nums.push_back(Data(3,30));
	nums.push_back(Data(4,40));
	nums.push_back(Data(5,50));
	
	int siz=nums.size();
	vector<Data> nums2(siz);

	transform(nums.begin(),nums.end(),nums2.begin(),set_smthn); 

	cout<<nums2<<endl;

return 0;

}
