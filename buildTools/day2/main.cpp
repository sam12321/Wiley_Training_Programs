#include<iostream>
using namespace std;

void mydisplay(){
	cout<<"in my display..."<<endl;
}

extern void display1();
extern void display2();
extern void display3();
//extern void display4();

int main()
{

	mydisplay();
	display1();
	display2();
	display3();
	//display4();
}
