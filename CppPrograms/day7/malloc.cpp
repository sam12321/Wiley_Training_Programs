#include<iostream>
using namespace std;

class Test
{
	public:
		int id;
		Test() //  similar to function
		{
		  int temp; // so these variables will be created and destroyed
		  float temp2;
		cout<<"Test::Test"<<endl;
		}
};
int main()
{
	Test t;
	cout<<sizeof(t)<<endl;

	int *p=(int *) malloc(8); // assigned memory using malloc

	*p=100; // frist 4 bytes assigned as 100
	
	p++;

	*p=200; // next 4 bytes assigned 200i
	cout<<"----------------"<<endl;
	//Test *t=(Test *) malloc(Test);
	//free t; // just frees the memory
	//Test *t=new Test; 
	//delete t; // calls the destructor to destroy the object

	return 0;
}
