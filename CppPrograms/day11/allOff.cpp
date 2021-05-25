// All_of Function

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

bool fn(Data &obj)
{
return(obj.marks>0);
}


int main()
{
	vector<Data> nums;
	nums.push_back(Data(1,10));
	nums.push_back(Data(2,20));
	nums.push_back(Data(3,30));
	nums.push_back(Data(4,40));
	nums.push_back(Data(5,50));

	vector<Data>::iterator it=nums.begin();
	vector<Data>::iterator it2=nums.end();
	
//	bool main_res=nums.all_of(it,it2,fn);

	bool res=allof(it,it2,fn);
	cout<<res<<endl;

return 0;
}
