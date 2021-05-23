#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

	// dynamic memory allocation
	int i;
	//int *p=&i;
	int *p=new int; // create 4 bytes of memory in heap
	*p=111;
	cout<<"p value is :"<<*p<<endl;
	return 0;
}
