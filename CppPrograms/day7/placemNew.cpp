// Placement New
// Allocating memory to New Using Malloc
// Don't call delete | returns the memory to OS
// Use Free

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
char *location=(char *) malloc(8); // creating memory of 8 bytes
cout<<location<<endl;
Test *t=new (location) Test; // Providing location and memory to new
cout<<"address : "<<t<<endl;



return 0;
}
