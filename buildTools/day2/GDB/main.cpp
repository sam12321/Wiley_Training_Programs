#include<iostream>
using namespace std;

void display1()
{
	cout<<"in display..."<<endl;
}
void display2()
{
	cout<<"in display1..."<<endl;
}
void display3()
{
	cout<<"in display3..."<<endl;
}

void display4()
{
	cout<<"in display4..."<<endl;
}

int main()
{
int count=0;

cout<<"before..."<<endl;

display1();
display2();
display3();
display4();

count=20;

cout<<"after..."<<endl;

return 0;
}
