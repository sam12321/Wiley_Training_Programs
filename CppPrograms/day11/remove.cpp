// Remove Function
// Deletes the specific element inside the data container

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

/* can't work without a vector
void removee(auto &it1,auto &it2,Data ele)
{
while(it1!=it2){

if((*it1).id==ele.id)
{
	//it1.remove();
	erase(it1);
}
it1++;
}
}
*/

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

	Data ele(2,20);

	 remove(nums.begin(),nums.end(),ele);
	
	// working of remove function
/*	while(it1!=it2)
	{
		if((*it1).id==ele.id)
		{
        		nums.erase(it1);
        		cout<<"found..."<<endl;
        	}
		else
		it1++;
	}
*/
	
	cout<<nums;

return 0;

}
