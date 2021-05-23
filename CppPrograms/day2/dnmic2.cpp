#include<iostream>
#include<stdio.h>

using namespace std;

/*
int* get_i(){
int i=10;
int *p=&i;
return p;
}*/

int * get_i() // using dynamically allocated variables
{
	int *p = new int; // allocating 4 bytes in the heap
	cout<<"base address of p in fn :"<<p<<endl;
	*p=1234;
	return p;
}

int main(){
	int *r=get_i();
	cout<<"Pointer returned by get_i is :"<<*r<<endl;
	delete r; // CLEAR THE MEMORY POINTED BY R
	cout<<"Value of r after DELETE is :"<<*r<<endl;
	return 0;
}
