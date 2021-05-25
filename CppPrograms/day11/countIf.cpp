// Count_if Function
// // counts occurences according to the function

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

	bool operator==(const Data &d)
	{
		return(this->id==d.id && this->marks==d.marks);
	}

};


	bool allof(vector<Data>::iterator it,vector<Data>::iterator it2,auto func)
	{
	int flag=0;
	while(it!=it2){
	if(!func(*it))
	  break;
	it++;
	}
	return(flag==0);
	}

	int countif(vector<Data>::iterator it,vector<Data>::iterator it2,auto func)
{
	int count=0;
	while(it!=it2)
	{
		if(func(*it))
			count++;
		it++;
	}
	return count;
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

	vector<Data>::iterator it=nums.begin();
	vector<Data>::iterator it2=nums.end();
	
	//int res= count_if(it,it2,fn);
	int res=countif(it,it2,fn);
	cout<<res<<endl;

return 0;

}
