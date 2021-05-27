#include<iostream>
using namespace std;

void calc() noexcept // don't throw exception from it
{
cout<<"no exception function..."<<endl;
}

class myexcep:public exception
{
	public:
		const char* what()
		{
			return "my exception...\n";
		}

};

int main()
{

try{
//int *p=new int[9999999999]; // will create bad_alloc exception

throw myexcep(); // throwing self created exceptions
}
catch(myexcep &e)
{
	cout<<"exception caught : "<<myexcep().what()<<endl;
}
catch(bad_alloc &b)
{
	cout<<"bad alloc exception caught..."<<endl;
}
catch(...)
{
cout<<"new exception caught..."<<endl;
}


return 0;
}
