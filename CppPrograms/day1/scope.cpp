#include<iostream>
using namespace std;

int i=500; //global

int main(){

int i =100; // local to main
{
	//block
	int i=200; // local to block
	cout<<"i in block:"<<i<<endl;
}
cout<<"i outside block:"<<i<<endl;
cout<<"global i value:"<<::i<<endl;
return 0;
}
