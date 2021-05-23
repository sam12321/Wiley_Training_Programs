#include<iostream>
#include<stdio.h>
using namespace std;

int* get_i(){

int* p = new int;
cout<<"current address of p :"<<p<<endl;
*p=1234;
cout<<"current value of p :"<<*p<<endl;
return p;

}

int main(){
/*
char *cp=(char *) new int;
int *ip=(int*) cp;
*ip = 0x41424344;
for(int i=0;i<4;i++){
cout<<hex<<*(cp+i)<<endl;
} */

int *p = new int[10]; // will get 10 cells i.e 40 bytes
for(int i=0;i<10;i++)
	*(p+i)=i;
for(int i=0;i<10;i++)
	cout<<*(p+i)<<endl;

//	delete p; // remove address pointed by p
delete [] p; // deletes all the element in array | only for arrays
return 0;
}
