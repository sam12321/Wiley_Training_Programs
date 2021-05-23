#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

unsigned int a[10]={0x44434241,0x41424341,0xA1B1C1D1,0x11223344};
	unsigned char *p = (unsigned char *) a;

// this is little endiian machine so it will access from right side
	
	cout<<*p;
	p++;
	cout<<*p;
	p++;
	cout<<*p;
return 0;
}
