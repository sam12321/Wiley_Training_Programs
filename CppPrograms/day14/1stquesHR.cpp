#include<iostream>
#include<vector>
using namespace std;

int main()
{

	vector<int> vec;

	int max_step=3;
	vec.push_back(10);
	vec.push_back(2);
	vec.push_back(-5);
	vec.push_back(5);
	vec.push_back(7);

	vector<int>::iterator it=vec.begin();
	int sum=0,tsum=0;
	sum=*it;
	vector<int>::iterator t=it;
	while(t!=vec.end())
	{
		t=it;
		tsum=0;
		for(int i=0;i<max_step;i++)
		{
			if(t!=vec.end()){
			t++;
		//	cout<<"t"<<*t<<endl;
			if(tsum<*t)
			{
				tsum=*t;
				it=t;
				//cout<<"inside if:"<<tsum<<endl;;
			}
				//cout<<"inside for:"<<tsum<<endl;;
		}
			else
				cout<<"reached"<<endl;
		}
		//cout<<"inside while:"<<tsum<<endl;
		sum=sum+tsum;
	}
	cout<<"sum is : "<<sum<<endl;
}	
