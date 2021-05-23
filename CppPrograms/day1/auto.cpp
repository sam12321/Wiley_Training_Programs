#include<iostream>
using namespace std;

int main()
{
	auto a=10; // integer
	auto b=10.2; // double
	auto c= 3.14f; // float
	cout<<"size: "<<sizeof(a)<<endl;
	cout<<"size: "<<sizeof(b)<<endl;
	cout<<"size: "<<sizeof(c)<<endl;

	cout<<typeid(a).name<<endl;
	return 0;
}
