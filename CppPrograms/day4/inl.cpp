#include<iostream>
using namespace std;

 inline namespace v1{ // All elements are global || open namespace
	void display(){
		cout<<"v1::display"<<endl;
	}
}

namespace v2{ // will give error if we put inline here
	void display(){
		cout<<"v2::display"<<endl;
	}
}
int main()
	{
	display();
	v2::display();
	return 0;
	}
