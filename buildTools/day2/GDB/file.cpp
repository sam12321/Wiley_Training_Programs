#include<iostream>
using namespace std;

void display1()
{
	cout<<"in display..."<<endl;
	char *ptr=NULL;
	ptr[2]='X';
}

void display2()
{
	cout<<"display2"<<endl;
	int c=1;
	while(c<=10)
	{
	cout<<"c value : "<<c<<endl;
	c++;
	}
	cout<<"leaving display2..."<<endl;
}

int main()
{
cout<<"before..."<<endl;

display1();
display2();

cout<<"after..."<<endl;

return 0;
}
